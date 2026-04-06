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

int main() {
    cout << "-----------START------------" << endl;
    cout << "FibonaciiNumber -------------- " << FibonaciiNumber(8);
    cout << endl;
    cout << "-----------END------------" << endl;
    return 0;
}
