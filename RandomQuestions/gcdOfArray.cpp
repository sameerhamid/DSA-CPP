#include <iostream>
using namespace std;


// Problem Description
// Given an array of numbers, find GCD of the array elements.

// The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.

int gcdOfArray(int n,int arr[]){
    int smallest = arr[0];
    for(int i=1;i<n;i++){
        if(arr[i] < smallest){
            smallest = arr[i];
        }
    }
    int g;
    for(int i = 2 ; i<=smallest; i++){
        bool notDivisible = false;
        for(int j =0; j< n; j++){
            if(arr[j]% i !=0){
             notDivisible = true;
            }
        }
        if(!notDivisible){
            g = i;
        }
    }
    return g;
}



int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int res = gcdOfArray(n,arr);
    cout << res << "\n";
}
