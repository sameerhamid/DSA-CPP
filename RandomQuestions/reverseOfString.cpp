#include<iostream>
using namespace std;

string reverseString(string s)
{
	string rev;
    cout << s.size()-1 << endl;
	for(int i = s.size()-1; i>=0; i--){
		rev.push_back(s[i]);
	}
	return rev;
}

int main()
{
	string s;
	cin>>s;
	string result = reverseString(s);
	cout<<result<<"\n";
	return 0;
}
