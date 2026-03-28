#include <iostream>
using namespace std;

// Problem Description
// Given an integer n, you have to find the nth fibonacci number. The fibonacci sequence is given by 0,1,1,2,3,5,8,... where 0 and 1 are the 0th and 1st fibonacci numbers respectively and every consecutive number is the sum of the previous two numbers in the sequence.


int nthFibonacciNumber(int n){
      if(n==0){
            return 0;
      }
      if(n ==1 ){
            return 1;
      }
      int a = 1;
      int b = 1;
      for(int i=2; i< n; i++){
        int c = a+b;
        a = b;
        b = c;
      }

      return b;
}

// NOTE: Please do not modify this function
int main(){
    int n;
    cin >> n;
    int result = nthFibonacciNumber(n);
    cout<<result;
}
