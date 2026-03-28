#include <iostream>
using namespace std;

// Problem Description
// Given a matrix of dimensions n x m, you are tasked with finding the sum of elements by starting at the index (i, j) and moving in a diagonal order.

// Write a function that takes the matrix, starting index (i, j), and returns the sum of the elements encountered while moving diagonally. If the starting index is invalid, return -1


int diagonalSum(vector<vector<int>> mat, int n, int m, int i, int j ) {
    if (i < 0 || i >= n || j < 0 || j >= m)
        return -1;
    int sum = 0;
    int row = i;
    int col = j;
    while (row < n && col < m) {
        sum += mat[row][col];
        row++;
        col++;
    }
    return sum;

}

int main(){
    int n,m;
    cin >> n >> m;
    int x,y;
    cin >> x >> y;
    vector<vector<int>> mat(n, vector<int>(m));
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < m; j++) {
            cin >> mat[i][j];
        }
    }
     int result = diagonalSum(mat,n,m, x, y);

    cout << result;
    return 0;
}
