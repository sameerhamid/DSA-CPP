#include <iostream>
using namespace std;

void PermutationOfString(char str1[], int k)
{
    static int A[10] = {0};
    static char res[10];
    int i;
    if (str1[k] == '\0')
    {
        res[k] = '\0';
        for (int j = 0; res[j] != '\0'; j++)
        {
            cout << res[j];
        }
        cout << " ";
    }
    else
    {
        for (i = 0; str1[i] != '\0'; i++)
        {
            if (A[i] == 0)
            {
                res[k] = str1[i];
                A[i] = 1;
                PermutationOfString(str1, k + 1);
                A[i] = 0;
            }
        }
    }
}

int main()
{
    char str1[] = "abc";
    PermutationOfString(str1, 0);
    cout << endl;
    return 0;
}
