#include <iostream>
using namespace std;

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

    cout << "Elements are: ";
    for (int i = 0; i < arr.length; i++) {
        cout << arr.A[i] << " ";
    }
    cout << endl;
}

struct Array* Merge(struct Array &arr1, struct Array &arr2) {
    int i = 0, j = 0, k = 0;

    struct Array *arr3 = new Array;
    arr3->size = arr1.length + arr2.length;
    arr3->length = 0;
    arr3->A = new int[arr3->size];
    while (i < arr1.length && j < arr2.length) {
        if (arr1.A[i] < arr2.A[j]) {
            arr3->A[k++] = arr1.A[i++];
        } else {
            arr3->A[k++] = arr2.A[j++];
        }
    }
    for (; i < arr1.length; i++) {
        arr3->A[k++] = arr1.A[i++];
    }
    for (; j < arr2.length; j++) {
        arr3->A[k++] = arr2.A[j++];
    }
    arr3->length = k;
    return arr3;
}

int main() {
    struct Array arr1, arr2;
    arr1.size = 10;
    arr1.length = 5;
    arr1.A = new int[arr1.size]{2, 6, 10, 15, 26};

    arr2.size = 10;
    arr2.length = 5;
    arr2.A = new int[arr2.size]{3, 4, 7, 18, 25};

    cout << "Array 1: ";
    Display(arr1);

    cout << "Array 2: ";
    Display(arr2);

    struct Array *arr3 = Merge(arr1, arr2);

    cout << "Merged Array: ";
    Display(*arr3);

    // Free memory
    delete[] arr1.A;
    delete[] arr2.A;
    delete[] arr3->A;
    delete arr3;

    return 0;
}
