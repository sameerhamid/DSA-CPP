#include<iostream>
using namespace std;

void FindingDuplicates(char str[]) {
    int hash[26] = {0};
    for (int i = 0; str[i] != '\0'; i++) {
        hash[str[i] - 97]++;
    }
    for (int i = 0; i < 26; i++) {
        if (hash[i] > 1) {
            cout << char(i + 97) << " ";
        }
    }
}

int main() {
    char str[] = "madam";
    FindingDuplicates(str);
    cout << endl;
    return 0;
}
