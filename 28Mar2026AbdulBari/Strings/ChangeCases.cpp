#include<iostream>
using namespace std;

void changeToLowercase(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] < 90)
        {
            str[i] = str[i] + 32;
        }
    }
    cout << str << endl;
}

void changeUperToLowerLowerToUpper(char str[])
{
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] <= 90 && str[i] >= 65)
        {
            str[i] = str[i] + 32;
        } else if (str[i] <=122 && str[i] >= 97) {
            str[i] = str[i] - 32;
        }
    }
    cout << str << endl;
}

int main() {
    char str[] = "SaMeeR";
    int len = 0;
    changeUperToLowerLowerToUpper(str);
    cout << endl;
    return 0;
}
