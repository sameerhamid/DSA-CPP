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


// ------------------------------------------------------------
// 2. HEAD RECURSION:-> IF A RECURSIVE FUNCTION IS CALING ITSELF AND THAT RECURSIVE CALL IS THE FIRST STATEMENT IN A FUNCTION
                    // The function does not have to procces or perform any operations at the time of calling  it has do everthing at the time of returning
                    // All the processing is done at returning time
void headRecursion(int n) {
    if(n > 0) {
        headRecursion(n - 1);
        cout << n << " ";
    }
}

void headRecursionUsingLoop(int n) {
    int i = 1;
    while (i <= n) {
        cout << i << " ";
        i++;
    }
}

// IF THE RECURSIVE FUNCTION HAS TO DO SOMETHING AT RETURNING TIME , IT CAN NOT BE EASILY CONVERTED IN THE FORM OF THE LOOP BUT IT CAN BE CONVERTED

// -------------------------------------------------------------------------

// 3. TREE RECURSION:-> IF A RECURSIVE FUNCTION IS CALLING ITSELF MORE THAN ONE TIME

// TIME COMPLEXITY: O(2^n);
// SPACE COMPLEXITY: O(n);
void treeRecursion(int n) {
    if (n > 0) {
        cout << n << " ";
        treeRecursion(n - 1);
        treeRecursion(n - 1);
    }
}

int main() {
    cout << "-----------START------------" << endl;
    tailRecursion(5);
    cout << endl;
    tailRecursionUsingLoop(5);
    cout << endl;
    headRecursion(5);
    cout << endl;
    headRecursionUsingLoop(5);
    cout << endl;
    treeRecursion(3);
    cout << endl;
    cout << endl << "-----------END------------" << endl;
    return 0;
