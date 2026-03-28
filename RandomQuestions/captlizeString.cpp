#include <iostream>
using namespace std;

// Problem Description
// Given a string, convert lowercase to uppercase without using any inbuilt function.


int findKeyByValue(const unordered_map<int, char>& map, char value) {
    for (const auto& pair : map) {
    int key = pair.first;
    char val = pair.second;
    if (val == value)
        return key;
    }
    return -1;
}
int main()
{
    string str;
    getline(cin, str);
    std::unordered_map<int, char> capMap;
    std::unordered_map<int, char> smallMap;
    string captilized;

    for (int i = 0; i < 26; ++i) {
        capMap[i + 1] = 'A' + i;
        smallMap[i + 1] = 'a' + i;
    }
    for (int i = 0; i < str.size(); i++)
    {
        if(int(str[i]) >= 97 && int(str[i]) <= 122){
            int key = findKeyByValue(smallMap, str[i]);
            captilized.push_back(capMap[key]);
        }else{
            captilized.push_back(str[i]);
        }
    }
    cout << captilized;
    return 0;
}
