#include<iostream>
using namespace std;

void changeToLowercase(char str[]) {
    for(int i = 0; str[i]!='\0'; i++) {
        if (str[i] < 90) {
            str[i] = str[i] + 32;
        }
    }
    cout << str << endl;
}

int main() {
    char str[] = "SAmEER";
    int len = 0;
    changeToLowercase(str);
    cout << endl;
    return 0;
}
