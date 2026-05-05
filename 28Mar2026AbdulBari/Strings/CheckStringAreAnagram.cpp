#include<iostream>
using namespace std;

void FindingDuplicates(char str1[], char str2[]) {
    int hash[26] = {0};
    int i;
    for (i = 0; str1[i] != '\0'; i++) {
        hash[str1[i] - 97]++;
    }
    for (i = 0; str2[i] != '\0'; i++) {
        hash[str2[i] - 97]--;
        if (hash[i] < 0) {
            cout << "Not Anagram" << endl;
            break;
        }
    }
    if (str2[i] == '\0') {
        cout << "Anagram" << endl;
    }
}

int main() {
    char str1[] = "decimal";
    char str2[] = "medical";
    FindingDuplicates(str1, str2);
    cout << endl;
    return 0;
}
