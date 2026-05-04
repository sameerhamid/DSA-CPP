#include<iostream>
using namespace std;
#include <iostream>
using namespace std;

bool isValid(char str[]) {
    for (int i = 0; str[i] != '\0'; i++) {
        if (!((str[i] >= 'A' && str[i] <= 'Z') || (str[i] >= 'a' && str[i] <= 'z') || (str[i] >= '0' && str[i] <= '9') || (str[i] == ' '))) {
            return false;
        }
    }
    return true;
}

int main() {
    char str[] = "Sameer is a great guy";
    cout << "Valid string: " << isValid(str) << endl;
    return 0;
}
