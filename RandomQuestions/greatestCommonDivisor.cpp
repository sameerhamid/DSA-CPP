#include <iostream>
using namespace std;

// Problem Description
// Given 2 numbers a and b, you have to find the gcd of these 2 numbers using recursion.

long long int gcd(long long int a, long long int b){
    long long int n = a;
    if(b<a){
        n = b;
    }
    long long int g;
    for(long long int i=2; i<=n; i++){
        if(a%i==0 && b% i ==0){
            g = i;
        }
    }
    return g;
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
