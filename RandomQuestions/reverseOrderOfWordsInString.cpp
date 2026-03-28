#include <iostream>
using namespace std;

// Problem Description
// A word is defined as a sequence of non-space characters. The words in s will be separated by at least one space.

// Return a string of the words in reverse order concatenated by a single space.

// Note that s may contain leading or trailing spaces or multiple spaces between two words.

// The returned string should only have a single space separating the words.

// Do not include any extra spaces.

string reverseWordsInAString(string str){
      string revStr;
     for (int i = str.size()-1; i >= -1; i--) {
         if(i != -1 && str[i] != ' '){
            continue;
         }
         int count = 0;
         for(int j = i+1; j < str.size() && str[j] !=' '; j++){
            revStr += str[j];
            count++;
         }
         if(count > 0){
            revStr += ' ';
         }
      }
      return revStr;
}

int main(){
    string str;
    getline(cin, str);
    cout<<reverseWordsInAString(str);
}
