#include<iostream>
using namespace std;

void Reverse(char str[]) {
    int i, j;
    for (j = 0; str[j] != '\0'; j++);
    j = j - 1;
    for (i = 0; i < j; i++, j--) {
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main() {
    char str[] = "Sameer is a great guy";
    Reverse(str);
    for (int i = 0; str[i] != '\0'; i++) {
        cout << str[i];
    }
    cout << endl;
    return 0;
}
