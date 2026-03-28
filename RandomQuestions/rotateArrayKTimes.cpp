#include <iostream>
using namespace std;

// Problem Description
// Given an array of n integers and an integer k, rotate the array k times in clockwise order.

vector<int> cyclicRotation(vector<int> vec,int n, int k){
     k = k % n;
    int index = n - k;
    vector<int> result(n);

    for(int i = index; i<n; i++){
        result[i-k-1] = vec[i];
    }

    for(int i = 0; i<index; i++){
        result[k+i] = vec[i];
    }

    return result;
}

// NOTE: Please do not modify this function
int main(){
    int n;
    cin >> n;
    vector<int> vec(n);
    for(int i = 0 ; i < n  ; i++) {
        cin >> vec[i];
    }
    int k;
    cin >> k;
    vector<int> result = cyclicRotation(vec, n, k);
    for(auto i : result) {
        cout << i << " ";
    }
    return 1;
}
