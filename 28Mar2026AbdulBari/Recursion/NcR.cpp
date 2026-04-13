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

int NCR(int n, int r) {
    if (n == r || r == 0) {
        return 1;
    }
    return NCR(n-1, r-1) + NCR(n-1, r);
}

int main() {
    cout << "-----------START------------" << endl;
    cout << "CalculateNcR>>>>>>>> "<< CalculateNcR(5, 3) << endl;
    cout << "CalculateNcR>>>>>>>> "<< NCR(5, 3) << endl;
    cout << endl << "-----------END------------" << endl;
    return 1;
}
