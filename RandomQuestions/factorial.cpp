#include <bits/stdc++.h>
using namespace std;

// Problem Description
// Given a number n, you have to calculate the factorial of that number.

// Note : No inbuilt function to be used
int factorial(int n){
    // --- itrative ----
    // int fac = 1;
    //   for(int i =n; i>0;i--){
    //         fac *= i;
    //   }
    //   return fac;

    // ----- recursion
      if(n  == 0){
            return 1;
      }
      return n * factorial(n-1);
}

// NOTE: Please do not modify this function
int main(){
    int n;
    cin >> n;
    int result = factorial(n);
    cout << result;
}
