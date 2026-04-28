#include<iostream>
using namespace std;

int main() {
    char str[] = "String";
    int len = 0;
    while(str[len] != '\0') len++;
    cout << endl;
    cout << "Length of string is: " << len << endl;
    return 0;
}
