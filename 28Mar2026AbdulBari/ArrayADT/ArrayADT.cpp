#include<iostream>
using namespace std;

// ADT: (Abstract Data Type) means representation of data and the set of operations on the data.

struct Array {
    int *A;
    int size;
    int length;
};

void Display(struct Array arr) {
    cout << "Elements are : ";
    for (int i = 0; i < arr.length; i++) {
        cout << arr.A[i] << " ";
    }
}

int main() {
    struct Array arr;
    cout << "Enter the size of an array: ";
    cin >> arr.size;
    arr.A = new int (arr.size);
    arr.length = 0;
    for (int i = 0; i < arr.size; i++) {
        arr.A[i] = i + 10;
        arr.length++;
    }
    Display(arr);
    cout << endl;
    cout << "--------------------- END -----------------------" << endl;

    return 0;
}
