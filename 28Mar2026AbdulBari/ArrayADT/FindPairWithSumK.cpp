#include <iostream>
using namespace std;

void findingPairWithSumK(int arr[], int n, int k)
{
    for (int i = 0; i < n - 1; i++)
    {
        for (int j = 0; j < n; j++) {
            if (arr[i] + arr[j] == k) {
                cout << "Pair is: " << arr[i] << " " << arr[j] << endl;
            }
        }
    }
}


int main()
{
    cout << "----------------START----------------------" << endl;

    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);

    cout << endl;
    findingPairWithSumK(arr, n, 6);

    cout << "---------------- END ----------------------" << endl;
    return 0;
}
