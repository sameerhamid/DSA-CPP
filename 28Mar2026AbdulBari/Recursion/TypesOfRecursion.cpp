#include<iostream>
using namespace std;

// 1. TAIL RECURSION:-> IF A RECURSIVE FUNCTION IS CALING ITSELF AND THAT RECURSIVE CALL IS THE LAST STATEMENT IN A FUNCTION
                        // And all the operations will be performed at calling time not returnig time
// Time complexty: O(n)
// Space complexty: O(n + 1)
void tailRecursion(int n) {
    if (n > 0) {
        cout << n << " ";
        // here can be multiple statements
        tailRecursion(n -1);
    }
}

// Time complexty: O(n)
// Space complexty: O(1)
void tailRecursionUsingLoop(int n) {
    while(n > 0) {
        cout << n << " ";
        n--;
    }
}
// CONCLUION: If you to write tail recursion then better is to convert into a loop that more efficient in terms of space

int main() {
    cout << "-----------START------------" << endl;
    tailRecursion(5);
    cout << endl;
    tailRecursionUsingLoop(5);
    cout << endl;
    cout << endl << "-----------END------------" << endl;
    return 0;
}
