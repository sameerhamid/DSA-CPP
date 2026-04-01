#include<iostream>
using namespace std;

int Power(int m, int n) {
    if (n == 0) {
        return 1;
    }
    return Power(m, n-1) * m;
}

int PowerOptimal(int m, int n) {
    if (n == 0) {
        return 1;
    }
    if (n % 2 == 0) {
        return PowerOptimal(m * m, n / 2);
    }
    return m * PowerOptimal(m * m, (n -1) / 2);
}

int main() {
    cout << "-----------START------------" << endl;
    cout << "Power: "<< Power(2, 5) << endl;
    cout << endl;
    cout << "PowerOptimal: "<< Power(3, 4) << endl;
    cout << endl;
    cout << endl << "-----------END------------" << endl;
    return 0;
}
