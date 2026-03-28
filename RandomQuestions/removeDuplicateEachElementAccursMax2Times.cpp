#include <iostream>
using namespace std;

// Problem Description
// Given a sorted array, remove the duplicates in-place, such that each element in the array appears at most twice, and return the new length.

// Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.


int removeDuplicatesFromSortedArrayII(int n, vector<int>& nums){
    int val = 0, count = 0, j = 0;
    for(int i=0; i<n;){
        val = nums[i];
        count = 0;
        while(i < n && nums[i]==val){
            count++;
            i++;
        }
        if(count > 2){
            count = 2;
        }
        while(count-- > 0){
            nums[j] = val;
            j++;
        }
    }
    return j;
}


int main(){
    int n;
    cin >> n;
    vector<int> nums(n);
    for (int i = 0; i < n; i++)
    {
        cin >> nums[i];
    }
    int new_length = removeDuplicatesFromSortedArrayII(n, nums);
    cout << new_length << "\n";
    for (int i = 0; i < new_length; i++)
    {
        cout << nums[i] << " ";
    }
}
