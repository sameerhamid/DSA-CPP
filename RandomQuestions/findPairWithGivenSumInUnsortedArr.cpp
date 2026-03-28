#include <iostream>
using namespace std;

// Problem Description
// Given an array of integers as input, output the indices of two numbers in the array which add up to a specified target.

// Assume that each input would have exactly one solution and you cannot use the same element twice. If 2 different elements have the same value, they can be used.

// Print the indices in increasing order.


class TwoSum {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> v(2, 0);
        unordered_map<int, int> um;
        for(int i =0; i< nums.size();i++){
            int val = target - nums[i];
           if(um.count(val) > 0){
                int j = um.at(val);
                v[0] = j;
                v[1] = i;
                return v;
           }
           um[nums[i]] = i;
        }
        return v;
    }
};

int main() {
    int n, target;
    cin >> n;
    vector<int> nums(n);
    for(int i=0; i<n; i++){
        cin >> nums[i];
    }
    cin >> target;
    vector<int> result = TwoSum().twoSum(nums, target);
    for(int i=0; i<result.size(); i++){
        cout << result[i] << " ";
    }
    cout << endl;
    return 0;
}
