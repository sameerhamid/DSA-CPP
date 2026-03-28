#include <iostream>
using namespace std;

// Problem Description
// Given two arrays A and B, write a function to compute their intersection.

// Note: Each element in the result should appear as many times as it shows in both arrays. The result needs to be in sorted order.

vector<int> intersectionOfTwoArrays( int n , vector<int> &arr1 , int m, vector<int> & arr2) {
	vector<int> vec;
    unordered_map<int, int> freq;
    for (int num : arr1) {
        freq[num]++;
    }
	for(int val: arr2){
		if(freq[val] > 0){
            vec.push_back(val);
            freq[val]--;
        }
	}
	sort(vec.begin(), vec.end());
	return vec;
}


int main() {
	int n, m;
	cin >> n;
	vector<int> nums1(n);
	for (int i = 0; i < n; i++) cin >> nums1[i];
	cin >> m;
	vector<int> nums2(m);
	for (int i = 0; i < m; i++) cin >> nums2[i];
	vector<int> ans = intersectionOfTwoArrays(n, nums1, m, nums2	);
	for ( auto it : ans) {
		cout << it << " ";
	}


}
