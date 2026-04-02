#include<iostream>
using namespace std;

double TaylorSeriesUsingLoop(int x, int n) {
    double S = 1;
    for(; n > 0; n--) {
        S = (1 + (x / n)) * S;
    }
    return S;
}


int main() {
    cout << "-----------START------------" << endl;
    cout << "TaylorSeriesUsingLoop -------------- " << TaylorSeriesUsingLoop(4, 15);

    cout << endl;
    cout << endl << "-----------END------------" << endl;
    return 0;
}
