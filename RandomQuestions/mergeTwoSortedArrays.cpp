#include <iostream>
using namespace std;

// Problem Description
// Given two sorted arrays of size M and N, merge the two arrays and return the final array, sorted.

vector<int> mergeSortedArray(vector<int>& nums1, int m, vector<int>& nums2, int n) {
    vector<int> mergedArr(n+m);
    // for(int i =0; i<n; i++){
    //     mergedArr.push_back(nums1[i]);
    // }
    // for(int i =0; i<m; i++){
    //     mergedArr.push_back(nums2[i]);
    // }
    // sort(mergedArr.begin(), mergedArr.end());
    // return mergedArr;

    int p1 = 0;
    int p2 = 0;
    int p3 = 0;
    while(p3 < (n+m)){
        if(p1 >= n){
            mergedArr[p3] = nums2[p2];
            p2++;
            p3++;
        }else if(p2 >= m){
            mergedArr[p3] = nums1[p1];
            p1++;
            p3++;
        }else{
              int val1 = nums1[p1];
        int val2 = nums2[p2];
        if(val1 <= val2){
            mergedArr[p3] = val1;
            p1++;
            p3++;
        }else{
            mergedArr[p3] = val2;
            p2++;
            p3++;
        }
    }
    }
    return mergedArr;

}

int main() {
    int m, n;
    cin >> m >> n;
    vector<int> nums1(n), nums2(m);
    cout << "Enter the first array elements in sorted order: " << endl;
    for(int i = 0; i<n; i++){
        cin >> nums1[i];
    }

    cout << "Enter the second array elements in sorted order: " << endl;
     for(int i = 0; i<m; i++){
        cin >> nums2[i];
    }
    vector<int> result = mergeSortedArray(nums1, m, nums2, n);
    for(int i =0; i< result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
