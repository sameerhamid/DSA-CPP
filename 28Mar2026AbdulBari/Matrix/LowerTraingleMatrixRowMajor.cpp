#include <iostream>
using namespace std;

class LowerTraingleMatrix {
    int n;
    int *A;
    LowerTraingleMatrix() {
        this->n = 2;
        A = new int[n];
    }
    public:
    LowerTraingleMatrix(int n) {
        this->n = n;
        A = new int[n];
    }
    ~LowerTraingleMatrix() {
        delete []A;
    }
    public:
    void Set(int i, int j, int x);
    int Get(int i, int j);
    void Display();
};

void LowerTraingleMatrix::Set(int i, int j, int x) {
    if (i >= j) {
        A[((i *(i-1)) / 2) + j -1] = x;
    }
}

int LowerTraingleMatrix::Get(int i, int j) {
    if (i >= j) {
        return A[((i * (i-1)) / 2) + j -1];
    }
    return 0;
}

void LowerTraingleMatrix::Display() {
    for(int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) {
                cout << A[i] << " ";
            } else {
                cout << "0  ";
            }
        }
        cout << endl;
    }
}

int main()
{
    LowerTraingleMatrix D(5);
    D.Set(1, 1, 10);
    D.Set(2, 1, 20);
    D.Set(2, 2, 30);
    D.Set(3, 1, 40);
    D.Set(3, 2, 40);
    D.Set(3, 3, 40);
    D.Set(4, 1, 40);
    D.Set(4, 2, 40);
    D.Set(4, 3, 40);
    D.Set(4, 4, 40);
    D.Set(5, 1, 40);
    D.Set(5, 2, 40);
    D.Set(5, 3, 40);
    D.Set(5, 4, 40);
    D.Set(5, 5, 40);
    D.Set(4,5, 90);
    cout << D.Get(2, 2) << endl;
    cout << D.Get(1, 2) << endl;
    cout << "---------------------------" << endl;
    D.Display();
    return 0;
}
