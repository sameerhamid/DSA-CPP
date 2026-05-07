#include <iostream>
using namespace std;

class DigonalMatrix {
    int n;
    int *A;
    DigonalMatrix() {
        this->n = 2;
        A = new int[n];
    }
    public:
    DigonalMatrix(int n) {
        this->n = n;
        A = new int[n];
    }
    ~DigonalMatrix() {
        delete []A;
    }
    public:
    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Display();
};

void DigonalMatrix::Set(int i, int j, int x) {
    if (i == j) {
        A[i-1] = x;
    }
}

int DigonalMatrix::Get(int i, int j) {
    if (i == j) {
        return A[i-1];
    }
    return 0;
}

void DigonalMatrix::Display() {
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) {
                cout << A[i] << " ";
            } else {
                cout << "0 ";
            }
        }
        cout << endl;
    }
}

int main()
{
    DigonalMatrix D(4);
    D.Set(1, 1, 10);
    D.Set(2, 2, 20);
    D.Set(3, 3, 30);
    D.Set(4, 4, 40);
    cout << D.Get(2, 2) << endl;
    cout << D.Get(1, 2) << endl;
    cout << "---------------------------" << endl;
    D.Display();
    return 0;
}
