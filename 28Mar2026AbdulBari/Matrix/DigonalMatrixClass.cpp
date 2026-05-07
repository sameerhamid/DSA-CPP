#include <iostream>
using namespace std;

class Matrix {
    int n;
    int *A;
    Matrix() {
        this->n = 2;
        A = new int[n];
    }
    public:
    Matrix(int n) {
        this->n = n;
        A = new int[n];
    }
    ~Matrix() {
        delete []A;
    }
    public:
    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Display();
};

void Matrix::Set(int i, int j, int x) {
    if (i == j) {
        A[i-1] = x;
    }
}

int Matrix::Get(int i, int j) {
    if (i == j) {
        return A[i-1];
    }
    return 0;
}

void Matrix::Display() {
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
    Matrix DigonalMatrix(4);
    DigonalMatrix.Set(1, 1, 10);
    DigonalMatrix.Set(2, 2, 20);
    DigonalMatrix.Set(3, 3, 30);
    DigonalMatrix.Set(4, 4, 40);
    cout << DigonalMatrix.Get(2, 2) << endl;
    cout << DigonalMatrix.Get(1, 2) << endl;
    cout << "---------------------------" << endl;
    DigonalMatrix.Display();
    return 0;
}
