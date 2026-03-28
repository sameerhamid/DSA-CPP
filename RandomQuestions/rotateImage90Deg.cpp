#include <iostream>
using namespace std;

// Problem Description
// You are given an n x n 2D matrix representing an image.

// Rotate the image by 90 degrees (clockwise).

// Note:

// You have to rotate the image in-place, which means you have to modify the input 2D matrix directly.

// DO NOT allocate another 2D matrix and do the rotation.


class RotateImage
{
public:
    void rotateImage(vector<vector<int>> &arr)
    {
        int size = arr.size();
        for (int i = 0; i < size; i++) {
            for(int j= i+1; j < size; j++){
                int temp = arr[i][j];
                arr[i][j] = arr[j][i];
                arr[j][i] = temp;
            }
        }
         for (int i = 0; i < size/2; i++) {
            for(int j=0; j< size; j++){
                int temp = arr[j][i];
                arr[j][i] = arr[j][size-i-1];
                arr[j][size-i-1] = temp;
            }
        }
        for (int i = 0; i < arr.size(); i++){
            for (int j = 0; j < arr.size(); j++){
                cout << arr[i][j] << " ";
            }
            cout << endl;
        }
    }
};

int main()
{
    int n;
    cin >> n;
    vector<vector<int>> matrix(n, vector<int>(n));
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> matrix[i][j];
        }
    }
    RotateImage().rotateImage(matrix);
    return 0;
}
