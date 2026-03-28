#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;


// Problem Description
// Given an array nums, you need to find the maximum sum of triplet (nums[i] + nums[j] + nums[k]) such that 0 <= i < j < k and nums[i] < nums[j] < nums[k]. If no such triplet exists print 0.

long getIthIndex(vector<int> &arr, int j) {
    long ans = 0;
    for (int i = 0; i < j; i++) {
        if (arr[i] < arr[j]) {
            ans = max(ans, (long)arr[i]);
        }
    }
    return ans;
}

long getKthIndex(vector<int> &arr, int j) {
    long ans = 0;
    for (int k = j + 1; k < arr.size(); k++) {
        if (arr[k] > arr[j]) {
            ans = max(ans, (long)arr[k]);
        }
    }
    return ans;
}

long long int maxSumTriplet(int n, vector<int> &nums) {
    long long maxSum = 0;
    for (int j = 1; j < n - 1; j++) {
        long ithVal = getIthIndex(nums, j);
        long kthVal = getKthIndex(nums, j);
        if (ithVal > 0 && kthVal > 0) {
            maxSum = max(maxSum, (long long)(ithVal + nums[j] + kthVal));
        }
    }
    return maxSum;
}

int main() {
    int t, n;
    cin >> t;
    while (t--) {
        cin >> n;
        vector<int> nums(n);
        for (int i = 0; i < n; i++) {
            cin >> nums[i];
        }
        long long int ans = maxSumTriplet(n, nums);
        cout << ans << endl;
    }
}
