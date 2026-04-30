#include<iostream>
using namespace std;


pair<int, int> countVowelsConsonants(char str[]) {
    int vCount = 0, cCount = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 'a' || str[i] == 'e' || str[i] == 'i' ||
            str[i] == 'o' || str[i] == 'u' ||
            str[i] == 'A' || str[i] == 'E' || str[i] == 'I' ||
            str[i] == 'O' || str[i] == 'U') {
            vCount++;
        } else {
            if ((str[i] >= 90 && str[i] <= 65) || (str[i] >= 97 && str[i] <= 122)) {
                cCount++;
            }
        }
    }
    return {vCount, cCount};
}

int main() {
    char str[] = "Sameer";
    pair<int, int> result = countVowelsConsonants(str);
    cout << "Vowels: " << result.first << endl;
    cout << "Consonants: " << result.second << endl;
    return 0;
}
