#include<iostream>
using namespace std;

// ADT: (Abstract Data Type) means representation of data and the set of operations on the data.

struct Array {
    int *A;
    int size;
    int length;
};

void Display(struct Array arr) {
    if (arr.length == 0) {
        cout << "Array is empty." << endl;
        return;
    }
    cout << "Elements are : ";
    for (int i = 0; i < arr.length; i++) {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

void Append(struct Array &arr, int elt) {
    if (arr.length >= arr.size) {
        cout << "❌ Cannot append " << elt << " → Array is full." << endl;
        return;
    }
    arr.A[arr.length] = elt;
    arr.length++;
    cout << "✅ Appended " << elt << " successfully." << endl;
}

void Insert(struct Array &arr, int index, int elt) {
    if (arr.length >= arr.size) {
        cout << "❌ Cannot insert " << elt << " → Array is full." << endl;
        return;
    }
    if (index < 0 || index > arr.length) {
        cout << "❌ Invalid index " << index << ". Valid range: 0 to " << arr.length << endl;
        return;
    }
    for (int i = arr.length; i > index; i--) {
        arr.A[i] = arr.A[i - 1];
    }
    arr.A[index] = elt;
    arr.length++;
    cout << "✅ Inserted " << elt << " at index " << index << "." << endl;
}

void Delete(struct Array &arr, int index) {
    if (index < 0 || index > arr.length) {
        cout << "❌ Invalid index " << index << ". Valid range: 0 to " << arr.length << endl;
        return;
    }
    int eltToDelete = arr.A[index];
    for (int i = index; i < arr.length - 1; i++) {
        arr.A[i] = arr.A[i+1];
    }
    arr.length--;
    cout << "✅ Deleted " << eltToDelete << " at index " << index << "." << endl;
}

int LinearSearch(struct Array arr, int elt) {
    for (int i = 0; i < arr.length; i++) {
        if (arr.A[i] == elt) {
            cout << elt << " found at index " << i << endl;
            return i;
        }
    }
    cout << elt << " Not found!" << endl;;
    return -1;
}

int ImprovedLinearSearchUsingTranspostiton(struct Array &arr, int elt) {
    for (int i = 0; i < arr.length; i++) {
        if (arr.A[i] == elt) {
            int temp = arr.A[i - 1];
            arr.A[i - 1] = arr.A[i];
            arr.A[i] = temp;
            cout << elt << " found at index " << i - 1 << endl;
            return i - 1;
        }
    }
    cout << elt << " Not found!" << endl;;
    return -1;
}

int ImprovedLinearSearchUsingMoveToFront(struct Array &arr, int elt) {
    for (int i = 0; i < arr.length; i++) {
        if (arr.A[i] == elt) {
            int temp = arr.A[0];
            arr.A[0] = arr.A[i];
            arr.A[i] = temp;
            cout << elt << " found at index " << 0 << endl;
            return 0;
        }
    }
    cout << elt << " Not found!" << endl;;
    return -1;
}

int BinarySearch(struct Array arr, int elt) {
    int low = 0, high = arr.length - 1, mid;
    while (low <= high) {
        mid = (low + high / 2);
        if (arr.A[mid] == elt) {
            cout << elt << " found at index " << mid << endl;
            return mid;
        } else if (elt < arr.A[mid]) {
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }
    cout << elt << " Not found!" << endl;;
    return -1;
}

int Get(struct Array arr, int index) {
    if (index < arr.length || index > 0) {
        return arr.A[index];
    }
    return -1;
}

void Set(struct Array &arr, int index, int elt) {
    if (index < arr.length || index > 0) {
        arr.A[index] = elt;
    }
}

int Max(struct Array arr) {
    if (arr.length > 0) {
        int max = arr.A[0];
        for (int i = 1; i < arr.length; i++) {
            if (arr.A[i] > max) {
                max = arr.A[i];
            }
        }
        return max;
    }
    return -1;
}

int Min(struct Array arr) {
    if (arr.length > 0) {
        int min = arr.A[0];
        for (int i = 1; i < arr.length; i++) {
            if (arr.A[i] < min) {
                min = arr.A[i];
            }
        }
        return min;
    }
    return -1;
}

int SumOfAllEltsItrative(struct Array arr) {
    int sum = 0;
    for (int i = 0; i < arr.length; i++) {
        sum += arr.A[i];
    }
    return sum;
}

int SumOfAllEltsRecursive(struct Array arr, int n) {
    if (n < 0) {
        return 0;
    }
    return SumOfAllEltsRecursive(arr, n - 1) + arr.A[n];
}

int Average(struct Array arr) {
    int sum = 0;
    for (int i = 0; i < arr.length; i++) {
        sum += arr.A[i];
    }
    return sum / arr.length;
}

int BinarySearchRecursive(struct Array arr, int elt, int low, int high) {
    if (low <= high) {
        int mid = (low + high / 2);
        if (arr.A[mid] == elt) {
            cout << elt << " found at index " << mid << endl;
            return mid;
        } else if (elt < arr.A[mid]) {
            return BinarySearchRecursive(arr, elt, low, mid - 1);
        } else {
            return BinarySearchRecursive(arr, elt, mid + 1, high);
        }
    }
    cout << elt << " Not found!" << endl;;
    return -1;
}

void ReverseUsingAuxilaryArray(struct Array &arr) {
    int temp[arr.length];

    for (int i = 0; i < arr.length; i++) {
        temp[i] = arr.A[arr.length - i - 1];
    }
    for (int i = 0; i < arr.length; i++) {
        arr.A[i] = temp[i];
    }
}

void Reverse(struct Array &arr) {
    int i = 0;
    int j = arr.length - 1;
    while (i < j) {
        int temp = arr.A[i];
        arr.A[i] = arr.A[j];
        arr.A[j] = temp;
        i++;
        j--;
    }
}

void InsertInAnSortedArray(struct Array &arr, int elt) {
    if (arr.length >= arr.size) {
        cout << "❌ Cannot insert " << elt << " → Array is full." << endl;
        return;
    }
    int i = arr.length - 1;
    while (arr.A[i] > elt) {
        arr.A[i + 1] = arr.A[i];
        i--;
    }
    arr.A[i+1] = elt;
    cout << "✅ Inserted " << elt << " at index " << i+1 << "." << endl;
}

bool IsSorted(struct Array arr) {
    for (int i = 0; i < arr.length - 1; i++) {
        if (arr.A[i] > arr.A[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    struct Array arr;
    cout << "Enter the size of an array: ";
    cin >> arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;
    Append(arr, 10);
    Append(arr, 11);
    // Append(arr, 12);
    Append(arr, 13);
    Append(arr, 14);
    Append(arr, 15);
    InsertInAnSortedArray(arr, 12);

    // Insert(arr, 2, 99);
    // Insert(arr, 2, 100);
    // Insert(arr, 2, 120);
    // Insert(arr, 2, 130);
    // Insert(arr, 2, 140);
    // Insert(arr, 2, 150);
    // Delete(arr, 0);
    // cout << endl;
    // ReverseUsingAuxilaryArray(arr);
    // Reverse(arr);
    Display(arr);
    cout << "IsSorted: " << IsSorted(arr) << endl;
    // LinearSearch(arr, 100);
    // ImprovedLinearSearchUsingTranspostiton(arr, 100);
    // ImprovedLinearSearchUsingTranspostiton(arr, 100);
    // ImprovedLinearSearchUsingMoveToFront(arr, 100);
    // BinarySearch(arr, 11);
    // BinarySearchRecursive(arr, 11, 0, arr.length - 1);
    // cout << "Max element : " << Max(arr) << endl;
    // cout << "Min element : " << Min(arr) << endl;
    // cout << "Sum of all element : " << SumOfAllEltsItrative(arr) << endl;
    // cout << "Sum of all element : " << SumOfAllEltsRecursive(arr, arr.length - 1) << endl;
    // cout << "Average of all element : " << Average(arr) << endl;
    cout << endl;
    cout << "Length of array is: " << arr.length << endl;
    // Free memory
    delete[] arr.A;
    cout << "\n--------------------- END -----------------------" << endl;
    return 0;
}
