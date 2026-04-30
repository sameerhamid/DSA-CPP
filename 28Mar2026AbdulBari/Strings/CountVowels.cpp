#include<iostream>
using namespace std;

int countVowels(char str[]) {
    int vCount = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U') {
            vCount++;
        }
    }
    return vCount;
}

int main() {
    char str[] = "Sameer";
    cout << "Vowels " << countVowels(str) << endl;
    return 0;
}
