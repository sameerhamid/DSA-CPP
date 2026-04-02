#include<iostream>
using namespace std;


double e(int x, int n) {
    static double p = 1, f = 1;
    double r;
    if (n == 0) {
        return 1;
    }
    r = e(x, n -1);
    p = p * x;
    f = f * n;
    return r + (p / f);
}

double TaylorSeriesItrative(int x, int n) {
    double p = 1, f = 1;
    double S = 1;
    for (int i = 1; i <= n; i++) {
        p = p * x;
        f = (f * i);
        S += p / f;
    }
    return S;
}
int main() {
    cout << "-----------START------------" << endl;
    cout << "TaylorSeries -------------- " << e(4, 15);
    cout << endl;
    cout << "TaylorSeriesItrative -------------- " << TaylorSeriesItrative(4, 15);
    cout << endl;
    cout << endl << "-----------END------------" << endl;
    return 0;
}
