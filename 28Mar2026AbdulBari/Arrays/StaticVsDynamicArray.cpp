#include<iostream>
using namespace std;

int main() {
    int A[5] = {1, 2, 3, 4, 5};
    int *p;
    // p = (int *) malloc(5 * sizeof(int));
    p = new int(5);
    p[0] = 3;
    p[1] = 4;
    p[2] = 6;
    p[3] = 5;
    p[4] = 8;

    cout << *p << endl;

    for (int i = 0; i < 5; i++) {
        cout << *(A + i) << " ";
    }
    cout << endl;
    cout << "---------------------------------";
    cout << endl;
    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;
    return 0;
}
