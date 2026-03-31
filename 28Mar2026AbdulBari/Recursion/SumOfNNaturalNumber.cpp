#include<iostream>
using namespace std;

int SumOfNNaturalNumbers(int n) {
    if (n == 0) {
        return 0;
    }
    return SumOfNNaturalNumbers(n - 1) + n;
}


int main() {

    cout << "-----------START------------" << endl;
    cout << "SumOfNNaturalNumbers -------------- " << SumOfNNaturalNumbers(6);
    cout << endl;

    cout << endl << "-----------END------------" << endl;
    return 0;
}
