#include<iostream>
using namespace std;

int Factorail(int n) {
    if (n == 0) {
        return 1;
    }
    return n * Factorail(n - 1);
}

int ItrativeFactorail(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) {
        fact = fact * i;
    }
    return fact;
}

int main() {

    cout << "-----------START------------" << endl;
    cout << "Factorail -------------- " << Factorail(6);
    cout << endl;
    cout << "ItrativeFactorail -------------- " << ItrativeFactorail(6);
    cout << endl << "-----------END------------" << endl;
    return 0;
}
