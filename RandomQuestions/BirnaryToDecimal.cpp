#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter to Binary number: ";
    cin >> n;
    int pow = 1;
    int ans = 0;
    while(n > 0){
        int rem = n%10;
        n = n/10;
        ans += (rem * pow);
        pow *= 2;
    }
    cout << endl;
    cout << ans;
    return 0;
}
