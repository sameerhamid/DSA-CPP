#include<iostream>
using namespace std;

int FibonaciiNumber(int n) {
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    return FibonaciiNumber(n - 2) + FibonaciiNumber(n -1);
}

int FibonaciiNumberItrative(int n) {
    int t0 = 0, t1 = 1, s;
    if (n == 0) {
        return 0;
    }
    if (n == 1) {
        return 1;
    }
    for (int i = 2; i <= n; i++) {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

int main() {
    cout << "-----------START------------" << endl;
    cout << "FibonaciiNumber -------------- " << FibonaciiNumber(8);
    cout << endl;
    cout << "FibonaciiNumberItrative -------------- " << FibonaciiNumberItrative(8);
    cout << endl;
    cout << "-----------END------------" << endl;
    return 0;
}
