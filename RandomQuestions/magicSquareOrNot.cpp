#include <iostream>
using namespace std;

// Problem Description
// Given a matrix of dimensions n x n having elements 1 to n*n distinct elements, check whether the matrix is magic square or not.

// Magic square is a square that has the same sum along all rows, columns and diagonals.

bool checkMagicSquare(vector<vector<int> > mat, int n){
     int dig1Sum =0;
    int dig2Sum = 0;
    for(int i = 0; i < n; i++){
        dig1Sum += mat[i][i];
        dig2Sum += mat[i][n-1-i];
    }
    if(dig1Sum != dig2Sum){
        return false;
    }

        for(int i = 0; i< n; i++){
            int rowSum = 0;
            int colSum = 0;
            for(int j = 0; j< n; j++){
                rowSum += mat[i][j];
                colSum += mat[j][i];
            }
            if(dig1Sum != rowSum){
                return false;
            }
            if(dig1Sum != colSum){
                return false;
            }
        }

    return true;
}

int main(){
    int n;
    cin >> n;
    vector<vector<int> > mat(n, vector<int>(n));
    for(int i = 0 ; i < n  ; i++) {
        for(int j = 0 ; j < n ; j++) {
            cin >> mat[i][j];
        }
    }
    bool result = checkMagicSquare(mat, n);
    if(result) {
        cout << "Yes";
    } else {
        cout << "No";
    }
    return 1;
}
