#include <iostream>
using namespace std;

// Problem Description
// Given a sorted array of integers and a target, find if there’s a pair of elements that add up to the target. Return true if such a pair can be found, and false otherwise.

bool twoSumInSortedArray(int n, vector<int> arr, int target){
    // for(int i =0; i<n-1; i++){
    //     for(int j =i+1; j<n; j++){
    //         if(arr[i]+arr[j] == target){
    //             return true;
    //         }
    //     }
    // }
    // return false;

    int left = 0;
    int right =  n-1;
    while(left < right){
        if(arr[left] + arr[right] == target){
            return true;
        }
        if(arr[left] + arr[right] > target){
            right--;
        }
        if(arr[left] + arr[right] < target){
            left++;
        }
    }
    return false;
}


int main(){
    int n;
    cin>>n;
    vector<int > arr(n);
    for(int i=0; i<n ;i++){
        cin>>arr[i];
    }
    int target;
    cin >> target;
    bool ans = twoSumInSortedArray(n, arr, target);
    cout << (ans ? "Present" : "Not Present") << "\n";
}
