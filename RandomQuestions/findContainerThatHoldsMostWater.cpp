#include <iostream>
using namespace std;

// Problem Description
// You are given an array of N non-negative integers where each represents the height of a line. N vertical lines are drawn at points marked 1 to n on the x axis as shown in the diagram. Find two lines, which together with the x axis forms a container, such that the container holds the most water. Assume the width of lines to be negligible.

// Note: You may not slant the container and n is at least 2.

class ContainerWithMostWater {
  public:
    int maxArea(vector<int>& height) {
        int answer = 0;
        int left = 0;
        int right = height.size()-1;
        while(right > left){
            int area = min(height[left], height[right]) * (right - left);
            answer = max(answer, area);
            if(height[left] < height[right] ){
                left++;
            }else{
                right--;
            }
        }
        return answer;
    }
};

int main() {
    int n;
    cin >> n;
    vector<int> height(n);
    // ReadMatrix<int>().OneDMatrix(n, height);
    for(int i=0; i<n; i++){
        cin >> height[i];
    }
    int result = ContainerWithMostWater().maxArea(height);
    cout << result;
    return 0;
}
