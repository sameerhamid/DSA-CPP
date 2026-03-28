#include <iostream>
using namespace std;

// Problem Description
// Given a number n, you have to find the number of Fibonacci numbers lesser than n.


int nthFibonacciNumber(int n){
    int n1=0,fib=1;
    int n2 = 1;
    int fib_count = 0;
    while (fib<n)
    {
        fib=n1+n2;
        n1=n2;
        n2=fib;
        fib_count++;
    }
    return fib_count;
}

// NOTE: Please do not modify this function
int main(){
    int n;
    cin >> n;
    int result = nthFibonacciNumber(n);
    cout<<result;
}
