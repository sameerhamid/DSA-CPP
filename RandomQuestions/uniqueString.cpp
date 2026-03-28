#include<iostream>
#include <set>
using namespace std;

// Problem Description
// Given a string S.Implement an algorithm to determine if a string has all unique characters.

bool isUnique(string s) {
	set<char> st;
	int n = s.size();
	 for(int i=0; i<n; ++i)
	{
		st.insert(s[i]);
	}

     for (auto& x : st)
	 if(st.size()== n)
	{
		return true;
	}
	else
	{
		return false;
	}
}

int main() {
	string s;
	cin >> s;
	bool answer = isUnique(s);
	if(answer) {
		cout << "Yes";
	} else {
		cout << "No";
	}
	return 0;
}
