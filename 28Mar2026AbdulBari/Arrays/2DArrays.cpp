#include<iostream>
using namespace std;

int main() {
    // -------------------- various ways of creating 2D arrays---------------------

    // ------------- inside stack ---------------------
    int arr[3][4] = {{1, 2, 3, 4}, {5, 6, 7, 8}, {2, 3, 4, 6}};

    // -------------------- ponter in stack and arrays in heap 0---------------
    int *B[3];
    B[0] = new int(4);
    B[1] = new int(4);
    B[2] = new int(4);
    int a = 1;
    int b = 1;

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            B[i][j] = a++;
        }
    }

    // -------------------- ponters as well as arrays in heap -----------------

    int **C;
    C = new int*[3];
    C[0] = new int (4);
    C[1] = new int (4);
    C[2] = new int (4);

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            C[i][j] = b++;
        }
    }

    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            cout << *(*(C + i) + j) << " ";
        }
        cout << endl;
    }
    cout << endl;
    cout << "-----------------------END----------------------" << endl;
    return 0;
}
