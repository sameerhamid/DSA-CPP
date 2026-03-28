#include<iostream>
using namespace std;

int s = 0;
int fun(int n) {
    // static int s = 0;
    if(n > 0) {
        s++;
        return fun(n - 1) + s;
    }
    return 0;
}

int main() {
    cout << "-----------START------------" << endl;
    cout << fun(5) << endl;
    cout << endl;
    cout << endl << "-----------END------------" << endl;
    return 1;
}
