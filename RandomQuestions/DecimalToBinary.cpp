#include<iostream>
using namespace std;

int main(){
    int n;
    cout << "Enter to Demical number: ";
    cin >> n;
    int pow = 1;
    int ans = 0;
    while(n > 0){
        int rem = n%2;
        n = n/2;
        ans += (rem * pow);
        pow *= 10;
    }
    cout << endl;
    cout << ans;
    return 0;
}
