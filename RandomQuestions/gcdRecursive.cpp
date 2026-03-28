#include <iostream>
using namespace std;

// Problem Description
// Given 2 numbers a and b, you have to find the gcd of these 2 numbers using recursion.

long long int gcd(long long int a, long long int b){
    long long int larger =0;
    long long int smaller = 0;
    if(a>b){
        smaller = b;
        larger = a;
    }else{
        smaller = a;
        larger = b;
    }

    if(larger% smaller==0){
        return smaller;
    }
    return gcd(larger% smaller, smaller);
}


int main(){
    int t;
    cin >> t;
    while (t--) {
        long long int a, b;
        cin >> a >> b;
        long long int result = gcd(a, b);
        cout << result << endl;
    }
}
