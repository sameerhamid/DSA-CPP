#include <iostream>
using namespace std;

// Problem Description
// Given a string, count the total number of vowels present in that string.

// Note: The string contains uppercase and lowercase english alphabets only.


// int countVowels(string s)
// {
//     const int size = 5;
//     int sum = 0;
//     char capVowels[size] = {'A', 'E', 'I', 'O', 'U'};
//     char smallVowels[size] = {'a', 'e', 'i', 'o', 'u'};

//    for(int i =0;i<size;i++){
//     for(int j = 0; j< s.length();j++){
//         if((s[j] == capVowels[i] || s[j] == smallVowels[i])){
//             sum++;
//         }
//     }
//    }
//     return sum;
// }

int countVowels(string s)
{
      int sum = 0;

      for(int i = 0; i< s.length();i++){
          if(s[i]=='a'|| s[i]=='e'||s[i]=='i'||s[i]=='o'||s[i]=='u'
        ||s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O' ||s[i]=='U')
        {
		    sum++;
        }
      }

      return sum;
}

// NOTE: Please do not modify this function
int main()
{
    string s;
    cin >> s;
    int result = countVowels(s);
    cout << result;
}
