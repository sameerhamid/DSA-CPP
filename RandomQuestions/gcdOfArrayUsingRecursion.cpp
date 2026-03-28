#include <iostream>
using namespace std;


// Problem Description
// Given an array of numbers, find GCD of the array elements.

// The greatest common divisor of two numbers is the largest positive integer that evenly divides both numbers.


int gcd(int a, int b){
    if(b==0){
        return a;
    }
    return gcd(b, a%b);
}

int gcdOfArray(int n,int arr[]){
    int a = 1;
    int ans = arr[0];
    while (a<n){
        ans = gcd(ans, arr[a]);
        a++;
    }
    return ans;
}


int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0;i<n;i++){
        cin >> arr[i];
    }
    int res = gcdOfArray(n,arr);
    cout << res << "\n";
}
