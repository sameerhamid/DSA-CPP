#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

// Problem Description
// An interval is a range, with a starting value and ending value. [1, 3] indicates elements 1, 2, 3 and so on.

// Given a collection of intervals, merge all overlapping intervals. The result should only have mutually exclusive intervals - meaning that no number should be common between two intervals, in the result.

// Note: The merged intervals should be printed in increasing order of start value.

bool compareRows(const vector<int>& row1, const vector<int>& row2) {
    return row1[0] < row2[0];
}

class MergeIntervals {
  public:
    vector<vector<int>> mergeIntervals(vector<vector<int>>& intervals) {
        int n = intervals.size();
        if (n == 0) return {};

        sort(intervals.begin(), intervals.end(), compareRows);
        vector<vector<int>> result;
        result.push_back(intervals[0]);

        for (int i = 1; i < n; i++) {
            vector<int>& last = result.back();
            if (intervals[i][0] <= last[1]) {
                last[1] = max(last[1], intervals[i][1]);
            } else {
                result.push_back(intervals[i]);
            }
        }
        return result;
    }
};

int main() {
    int n;
    cin >> n;
    vector<vector<int>> nums(n, vector<int>(2));
    for (int i = 0; i < n; i++) {
        cin >> nums[i][0] >> nums[i][1];
    }

    MergeIntervals obj;
    vector<vector<int>> merged = obj.mergeIntervals(nums);

    for (const auto& row : merged) {
        cout << row[0] << " " << row[1] << endl;
    }

    return 0;
}
