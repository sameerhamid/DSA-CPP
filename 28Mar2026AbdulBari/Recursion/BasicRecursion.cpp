#include<iostream>
using namespace std;

void printValuesFromNTo1(int n) {
    if (n > 0) {
        cout << n << " ";
        printValuesFromNTo1(n - 1);
    }
}

void printValuesFrom1ToN(int n) {
    if (n > 0) {
        printValuesFrom1ToN(n - 1);
        cout << n << " ";
    }
}

int main() {
    cout << "-----------START------------" << endl;
    printValuesFromNTo1(5);
    cout << endl;
    printValuesFrom1ToN(5);
    cout << endl << "-----------END------------" << endl;
}
