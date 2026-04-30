#include<iostream>
using namespace std;

int countWords(char str[]) {
    int wCount = 0;
    for (int i = 0; str[i] != '\0'; i++) {
        if (str[i] == 32 && str[i - 1] != 32) {
            wCount++;
        }
    }
    if (wCount > 0) {
        return ++wCount;
    }
    return wCount;
}

int main() {
    char str[] = "Sameer is a great guy";
    cout << "Words " << countWords(str) << endl;
    return 0;
}
