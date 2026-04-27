#include <iostream>
using namespace std;

void findingDuplicateElts(int arr[], int n)
{
    for (int i = 0; i < n - 1; i++)
    {
        int count = 1;
        if (arr[i] != -1)
        {
            for (int j = i + 1; j < n; j++)
            {
                if (arr[i] == arr[j])
                {
                    count++;
                    arr[j] = -1;
                }
            }

            if (count > 1)
            {
                cout << "Element " << arr[i] << " occurs " << count << " times\n";
            }
        }
    }
}

int main()
{
    cout << "----------------START----------------------" << endl;

    int arr[] = {1, 2, 3, 2, 4, 3, 5, 3};
    int n = sizeof(arr) / sizeof(arr[0]);

    findingDuplicateElts(arr, n);

    cout << "---------------- END ----------------------" << endl;
    return 0;
}
