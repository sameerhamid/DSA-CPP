#include<iostream>
using namespace std;

int main() {
    int *p , *q;
    p = (int *) malloc(5 * sizeof(int));
    p[0] = 4;
    p[1] = 2;
    p[2] = 7;
    p[3] = 9;
    p[4] = 3;
    for (int i = 0; i < 5; i++) {
        cout << *(p + i) << " ";
    }
    q = (int *) malloc(10 * sizeof(int));
    for (int i = 0; i < 5; i++) {
        q[i] = p[i];
    }
    cout << endl;
    free(p);
    p = q;
    q = NULL;
    for (int i = 0; i < 10; i++) {
        cout << *(p + i) << " ";
    }
    cout << endl;
    return 0;
}
