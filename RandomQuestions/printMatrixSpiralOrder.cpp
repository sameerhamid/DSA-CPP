#include <iostream>
using namespace std;

// Problem Description
// Given an integer A, generate a square matrix filled with elements from 1 to A*A in spiral order. The spiral order will be clockwise in nature starting from (0,0)

vector<vector<int > > spiralMatrixII(int n){
    int rowStart = 0;
    int rowEnd = n - 1;
    int colStart = 0;
    int colEnd = n - 1;
    int i = 1;
    vector<vector<int>> vec(n, vector<int>(n));
    while(i <= (n*n)){
        for(int j = colStart; j <= colEnd; j++){
            vec[rowStart][j] = i;
            i++;
        }
        rowStart++;
        for(int j = rowStart; j <= rowEnd; j++ ){
            vec[j][colEnd] = i;
            i++;
        }
        colEnd--;
        for(int j = colEnd; j >= colStart; j--){
            vec[rowEnd][j] = i;
            i++;
        }
        rowEnd--;
        for(int j = rowEnd; j >= rowStart; j--){
            vec[j][colStart] = i;
            i++;
        }
        colStart++;
    }
    return vec;
}


int main(){
    int n;
    cin>>n;
    vector<vector<int> > result = spiralMatrixII(n);
    for(auto &row: result){
        for(auto &element: row){
            cout<<element<<" ";
        }
        cout<<"\n";
    }
    return 0;
}
