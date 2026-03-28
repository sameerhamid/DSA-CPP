#include <iostream>
#include <sstream> // include this for stringstream
using namespace std;

// Problem Description
// You are given a string of words present in a book. Find out the count of words present in that book.

int wordCount(string &s){
    int count = 0;
  stringstream ss(s);
    string Buf;

    while (ss >> Buf){
        count++;
    }
    return count;
}


int main(){
    string s;
    getline(cin,s);
    int res = wordCount(s);
    cout << res << "\n";

}
