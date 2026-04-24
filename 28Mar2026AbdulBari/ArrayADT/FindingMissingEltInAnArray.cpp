#include <iostream>
using namespace std;

int findingMissingEltInAnArray(int arr[], int n) {
    int cache[11] = {0};
    for (int i = 0; i < n; i++) {
        cache[arr[i]] = 1;
    }
    for (int i = 1; i <= 10; i++) {
        if (cache[i] == 0) {
            return i;
        }
    }
    return -1;
}

int main() {
    cout << "----------------START----------------------" << endl;
    int arr[] = {1, 2, 3, 4, 6, 7, 8, 9, 10};
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << "MISSING ELEMENT: " << findingMissingEltInAnArray(arr, n) << endl;
    cout << "---------------- END  ----------------------" << endl;
    return 0;
}
