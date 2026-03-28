#include <iostream>
using namespace std;

// Problem Description
// You are given a list of words present in a book. Find out the count of unique words present in that book.

// Input format
// The first input line has an integer n where n is the number of words. Further n subsequent lines have word s[i].

int uniqueWords(int n,string s[]){
    set<string> mySet;
    for(int i =0; i< n; i++){
        mySet.insert(s[i]);
    }
    return mySet.size();
}


int main(){
    int n;
    cin >> n;
    string s[n];
    for(int i=0;i<n;i++)
    {
        cin >> s[i];
    }
    int res = uniqueWords(n,s);
    cout << res << "\n";
}
