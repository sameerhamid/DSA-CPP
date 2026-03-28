#include<iostream>
#include<stdlib.h>
using namespace std;

struct Array
{
    int *A;
    int size;
    int length;
};


void Display(struct Array arr)
{
    cout << "Printing Elements of an array: "<< endl;
    for(int i=0; i<arr.length; i++){
        cout << arr.A[i] << " ";
    }
};

void Append(struct Array &arr, int elt){
    if(arr.length < arr.size){
        arr.A[arr.length++] = elt;
    }
}

void Insert(struct Array &arr, int index, int elt){
    if(index >=0 && index < arr.length){
        for(int i = arr.length; i > index; i--){
             arr.A[i] = arr.A[i-1];
        }
        arr.A[index] = elt;
        arr.length++;
    }
}

int Delete(struct Array &arr, int index){
    if(index < arr.length){
        int deleteElt = arr.A[index];
        for(int i = index; i < arr.length-1; i++){
            arr.A[i] = arr.A[i+1];
        }
        arr.length--;
        return deleteElt;
    }
    return 0;
}

int LinearSearch(struct Array &arr, int key){
    for (int i = 0; i < arr.length; i++){
        if(arr.A[i] == key){
            return i;
        }
    }
    return 0;
}

int main(){
    struct Array arr;
    int n;
    cout << "Enter size of array: " << endl;
    cin >> arr.size;
    arr.A = (int *)malloc(arr.size * sizeof(int));
    arr.length = 0;

    cout << "Enter number of elements to store " << endl;
    cin >> n;

    cout << "Enter elemets to store: ";
    for(int i=0; i<n; i++){
        cin >> arr.A[i];
    }
    arr.length = n;
    // Append(arr, 20);
    // Insert(arr, 1, 7);
    // int deletedElt = Delete(arr, 2);
    // cout << deletedElt << endl;

    Display(arr);
    cout << endl;
    cout << "-------------------------" << endl;

    cout << LinearSearch(arr, 4) << endl;

    return 0;
}
