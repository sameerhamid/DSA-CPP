#include<iostream>
using namespace std;

void printValuesFromNTo1(int n) {
    if (n > 0) {
        cout << n << " ";
        printValuesFromNTo1(n - 1);
    }
}

int main() {
    cout << "-----------START------------" << endl;
    printValuesFromNTo1(5);
    cout << endl << "-----------END------------" << endl;
}
