#include<iostream>
using namespace std;

// Problem Description
// Given a string S which consists of both lowercase and uppercase alphabetical letters, you have to write a function to check if string S is a permutation of a palindrome or not. Note: Characters are case sensitive i.e. ‘a’ is not the same as ‘A’.

bool isPermutationPalindrome(string &s) {
    unordered_map<char, int> myMap;
    for(int i=0; i<s.size();i++){
        myMap[s[i]]++;
    }
    int count = 0;
     for (const auto& pair : myMap) {
        if (pair.second % 2 > 0) {
            count++;
            if(count > 1){
                return false;
            }
        }
    }
    return true;
}

int main()
{
		string s;
		cin >> s;
		bool answer = isPermutationPalindrome(s);
		if(answer) {
			cout << "True\n";
		} else {
			cout << "False\n";
		}
	return 0;
}
