#include <iostream>
#include <set>
using namespace std;

// Problem Description
// Given an unsorted array of integers, find the smallest missing positive integer. The space complexity need not be O(1), you can also implement a O(N) space complexity solution.

class FirstMissingPositive {
  public:
    int firstMissingPositive(vector<int> nums) {
        set<int> s1;
        for(int val : nums){
            if(val > 0 ){
                s1.insert(val);
            }
        }
        if(max==0){
            return 1;
        }
        for(int i = 1; i < nums.size(); i++){
            if(s1.count(i) <= 0){
                return i;
            }
        }
        return nums.size()+1;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> nums(n);
    for(int i=0;i<n;i++)
        cin>>nums[i];
    int result = FirstMissingPositive().firstMissingPositive(nums);
    cout << result << '\n';
    return 0;
}
