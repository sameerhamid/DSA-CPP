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

int main() {
    struct Array arr;
    cout << "Enter the size of an array: ";
    cin >> arr.size;
    arr.A = new int[arr.size];
    arr.length = 0;
    Append(arr, 10);
    Append(arr, 11);
    Append(arr, 12);
    Append(arr, 13);
    Append(arr, 14);
    Append(arr, 15);
    Insert(arr, 2, 99);
    Insert(arr, 2, 100);
    Insert(arr, 2, 120);
    Insert(arr, 2, 130);
    Insert(arr, 2, 140);
    Insert(arr, 2, 150);
    cout << endl;
    Display(arr);
    cout << endl;
    // Free memory
    delete[] arr.A;
    cout << "\n--------------------- END -----------------------" << endl;
    return 0;
}
