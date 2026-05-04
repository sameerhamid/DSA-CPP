#include<iostream>
using namespace std;

bool Palandrome(char str[]) {
    int i, j;
    for (j = 0; str[j] != '\0'; j++);
    j = j - 1;
    for (i = 0; i < j; i++, j--) {
        if (str[i] != str[j]) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[] = "madam";
    cout << "Palandrom: " << Palandrome(str);
    cout << endl;
    return 0;
}
