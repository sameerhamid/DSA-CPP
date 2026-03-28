#include<iostream>
using namespace std;

// Problem Description
// The Tribonacci sequence Tn is defined as follows: T0 = 0, T1 = 1, T2 = 1, and Tn+3 = Tn + Tn+1 + Tn+2 for n >= 0.

// Given n, return the value of Tn.


int tribonacci(int n)
{
      if(n==0){
            return 0;
      }
      if(n ==1){
            return 1;
      }
      int a =0 , b =1, c=1;
      for(int i =2; i< n; i++){
            int d = a+b+c;
            a = b;
            b = c;
            c = d;
      }
      return c;
}
int main ()
{
	int n;
	cin>>n;
	cout << tribonacci(n);
}
