#include<iostream>
using namespace std;

#include <iostream>
using namespace std;

void Compare(char str1[], char str2[]) {
    int i = 0;
    while (str1[i] != '\0' && str2[i] != '\0') {
        if (str1[i] != str2[i]) {
            break;
        }
        i++;
    }
    if (str1[i] == str2[i]) {
        cout << "Equal" << endl;
    } else if (str1[i] < str2[i]) {
        cout << "Smaller" << endl;
    } else {
        cout << "Greater" << endl;
    }
}

int main() {
    char str1[] = "Sameer a great guy";
    char str2[] = "Sameer is a great guy";
    Compare(str1, str2);
    cout << endl;
    return 0;
}
