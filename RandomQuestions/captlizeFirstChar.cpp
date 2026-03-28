#include <iostream>
using namespace std;

// Given a paragraph of words, capitalise the first character of each word and return the updated paragraph.

// Note : No inbuilt function such as split() to be used.

string capitalise(string para){
    cout << para.length();
      for(int i = 0; i< para.length(); i++){
        if(i==0){
            para[i] = toupper(para[i]);
        }if(para[i-1] == ' '){
            para[i] = toupper(para[i]);
        }else {
            para[i] = para[i];
        }
      }
      return para;
}

// NOTE: Please do not modify this function
int main(){
    string para;
    getline(cin, para);
    string new_para = capitalise(para);
    cout << new_para;
}
