#include<iostream>
using namespace std;

int Power(int m, int n) {
    if (n == 0) {
        return 1;
    }
    return Power(m, n-1) * m;
}



int main() {
    cout << "-----------START------------" << endl;
    cout << "Power: "<< Power(2, 5) << endl;

    cout << endl << "-----------END------------" << endl;
    return 0;
}
