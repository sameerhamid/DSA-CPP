#include <iostream>
using namespace std;

// Problem Description
// Given an m x n matrix, if an element is 0, set its entire row and column to 0.

// Do it in-place, that is, modify the same matrix. Do not create a new one.

class SetMatrixZeroes {
  public:
    void setMatrixZeroes(vector<vector<int>>& matrix) {
        int n = matrix.size();
        int m = matrix[0].size();
        vector<bool> rows(n);
        vector<bool> cols(m);
        for(int i=0; i<n; i++){
            for(int j = 0; j< m; j++){
                if(matrix[i][j] ==0){
                    rows[i] = true;
                    cols[j] = true;
                }
            }
        }
        for(int i =0; i<n; i++){
            for(int j=0; j<m; j++){
                 if(rows[i] == true || cols[j] == true){
                    matrix[i][j] = 0;
                 }
            }
        }
        cout << "------------------" <<  endl;
    }
};

int main() {
    int m, n;
    cin >> m >> n;
    vector<vector<int>> grid(m,vector<int> (n));
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>grid[i][j];
        }
        cout<<"\n";
    }
    SetMatrixZeroes().setMatrixZeroes(grid);
    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<grid[i][j]<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
