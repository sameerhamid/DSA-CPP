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
    if (n <= 1) {
        return n;
    }
    for (int i = 2; i <= n; i++) {
        s = t0 + t1;
        t0 = t1;
        t1 = s;
    }
    return s;
}

int M[10];

int FibonaciiNumberRecursiveWithMemozation(int n) {
    if (n <= 1) {
        M[n] = n;
        return n;
    } else {
        if (M[n - 2] == -1) {
             M[n - 2] = FibonaciiNumberRecursiveWithMemozation(n - 2);
        }
        if (M[n -1] == -1) {
            M[n - 1] = FibonaciiNumberRecursiveWithMemozation(n -1);
        }
        M[n] = M[n -2] + M[n -1];
        return M[n - 2] + M[n - 1];
    }
}

int main() {
    cout << "-----------START------------" << endl;
    cout << "FibonaciiNumber -------------- " << FibonaciiNumber(8);
    cout << endl;
    cout << "FibonaciiNumberItrative -------------- " << FibonaciiNumberItrative(8);
    cout << endl;
    for (int i = 0; i < 10; i++) {
        M[i] = -1;
    }
    cout << "FibonaciiNumberRecursiveWithMemozation -------------- " << FibonaciiNumberRecursiveWithMemozation(8);
    cout << endl;
    cout << "-----------END------------" << endl;
    return 0;
}
