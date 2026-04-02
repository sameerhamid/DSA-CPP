#include<iostream>
using namespace std;

double TaylorSeriesUsingLoop(int x, int n) {
    double S = 1;
    for(; n > 0; n--) {
        S = 1 + x * S / n;
    }
    return S;
}

double TaylorSeriesUsingRecursion(int x, int n) {
    static double S = 1;
    if (n == 0) {
        return S;
    }
    S = 1 + x * S / n;
    return TaylorSeriesUsingRecursion(x, n - 1);
}

int main() {
    cout << "-----------START------------" << endl;
    cout << "TaylorSeriesUsingLoop -------------- " << TaylorSeriesUsingLoop(4, 15);
    cout << endl;
    cout << "TaylorSeriesUsingRecursion -------------- " << TaylorSeriesUsingRecursion(1, 10);
    cout << endl;
    cout << endl << "-----------END------------" << endl;
    return 0;
}
