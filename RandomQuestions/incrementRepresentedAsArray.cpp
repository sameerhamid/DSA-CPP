#include <iostream>
using namespace std;

// Problem Description
// Given a number represented as an array of digits, increment the number by 1, and return the resulting sum as an array.

vector<int> incrementNumber(int n, vector<int > A){
    // int num = 0;
    // vector<int> vec;
    // for(int i = 0; i < n; i++){
    //     num = A[i] + num * 10;
    // }
    // num++;
    // while(num>0){
    //     vec.push_back(num%10);
    //     num = num/10;
    // }
    // reverse(vec.begin(), vec.end());
    // return vec;
    for(int i= n-1 ;i>=0; i--){
        if(A[i]==9){
            A[i] = 0;
        }else {
            A[i]++;
            return A;
        }
    }
    vector<int> vec(n+1);
    vec[0] = 1;
    return vec;

}


int main(){
    int n;
    cin >> n;
    vector<int> A(n);
    for (auto &i : A)
    {
        cin >> i;
    }
    vector<int> result = incrementNumber(n, A);
    for (int i = 0; i < result.size(); i++)
    {
        cout << result[i];
    }
}
