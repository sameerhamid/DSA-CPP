#include<iostream>
using namespace std;

int SumOfNNaturalNumbers(int n) {
    if (n == 0) {
        return 0;
    }
    return SumOfNNaturalNumbers(n - 1) + n;
}

int ItrativeSum(int n) {
    int s = 0;
    for (int i = 1; i <= n; i++) {
        s = s + i;
    }
    return s;
}

int main() {

    cout << "-----------START------------" << endl;
    cout << "SumOfNNaturalNumbers -------------- " << SumOfNNaturalNumbers(6);
    cout << endl;
    cout << "ItrativeSum -------------- " << ItrativeSum(6);
    cout << endl;
    cout << endl << "-----------END------------" << endl;
    return 0;
}
