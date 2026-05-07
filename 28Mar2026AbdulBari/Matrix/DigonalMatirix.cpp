#include <iostream>
using namespace std;

struct Matrix {
    int arr[10];
    int n;
};

void Set(struct Matrix &m, int i, int j, int x) {
    if (i == j) {
        m.arr[i-1] = x;
    }
}

int Get(struct Matrix m, int i, int j) {
    if (i == j) {
        return m.arr[i -1];
    } else {
        return 0;
    }
}

void Print(struct Matrix m) {
    for (int i = 0; i < m.n; i++) {
        for (int j = 0; j < m.n; j++) {
            if (i == j) {
                cout << m.arr[i] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

int main()
{
    struct Matrix m;
    m.n = 4;
    Set(m, 1, 1, 1);
    Set(m, 2, 2, 2);
    Set(m, 3, 3, 3);
    Set(m, 4, 4, 4);
    cout << "----------------------" << endl;
    cout << Get(m, 1, 2) << endl;
    cout << Get(m, 1, 1) << endl;
    cout << Get(m, 2, 2) << endl;
    Print(m);
    return 0;
}
