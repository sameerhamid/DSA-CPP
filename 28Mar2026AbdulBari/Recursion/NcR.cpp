#include<iostream>
using namespace std;

int factorial(int n) {
    if (n == 1) {
        return 1;
    }
    return n * factorial(n - 1);
}

int CalculateNcR(int n, int r) {
    int nFact = factorial(n);
    int rFact = factorial(r);
    int nMinusRFact = factorial(n - r);
    return nFact / (rFact * nMinusRFact);
}

int main() {
    cout << "-----------START------------" << endl;
    cout << "CalculateNcR>>>>>>>> "<< CalculateNcR(5, 3) << endl;
    cout << endl << "-----------END------------" << endl;
    return 1;
}
