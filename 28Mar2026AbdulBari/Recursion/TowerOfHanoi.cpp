#include<iostream>
using namespace std;

void TowerOfHanoi(int n, int A, int B, int C) {
    if (n > 0) {
        TowerOfHanoi(n - 1, A, C, B);
        cout << "From " << A << " To " << C << " ";
        TowerOfHanoi(n - 1, B, A, C);
    }
    return;
}

int main() {
    cout << "-----------START------------" << endl;
    cout << "TowerOfHanoi>>>>>>>>>>>> ";
    TowerOfHanoi(4, 1, 2, 3);
    cout << endl << "-----------END------------" << endl;
    return 0;
}
