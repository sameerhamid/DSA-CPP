#include <iostream>
using namespace std;

// Problem Description
// You are given a string which comprises lower case alphabets (a-z), upper case alphabets (A-Z), numbers, (0-9) and special characters like !,-.; etc.

// You are supposed to find out which character occurs the maximum number of times and its occurrence count in the given string. If two characters occur equal number of times, you have to output the character with the lower ASCII value.

// For example, if your string was: aaaaAAAA, your output would be: A 4, because A has lower ASCII value than a.

pair<int, char> findMostFrequent(string text) {
      unordered_map<char, int> myMap;
      for(int i=0; i< text.size(); i++){
            myMap[text[i]]++;
      }
    auto it = myMap.begin();
      for (auto &p : myMap){
        if(p.second > it->second){
            it = myMap.find(p.first);
        }else if(p.second == it->second){
                  if(int(p.first) < int(it->first)){
                        it = myMap.find(p.first);
                  }
            }
      }
      return {it->second, it->first};
}

// NOTE: Please do not modify this function
int main(){
    string text;
    getline(cin, text);

    char mostFrequent;
    int frequency;

    tie(frequency, mostFrequent) = findMostFrequent(text);
    cout << mostFrequent << " " << frequency << "\n";
}
