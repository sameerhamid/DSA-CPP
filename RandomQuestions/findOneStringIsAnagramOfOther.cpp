#include <iostream>
using namespace std;

using namespace std;

class ValidAnagram {
    public:
        bool validAnagram(string s, string t) {
            int n = s.size();
            int m = t.size();
            vector<int> v1(26);
            vector<int> v2(26);
            for(int i=0; i<n; i++){
                cout << (s[i-'a']) << " ";
                v1[s[i-'a']]++;
            }
            cout << endl;
            for(int i=0; i<m; i++){
                v2[t[i-'a']]++;
            }
            for(int i=0; i<26;i++){
                cout << v1[i] << " "<< v2[i];
            }
            cout << endl;
            return true;
        }

};

int main() {
    string s, t;
    getline(cin, s);
    getline(cin, t);
    bool result = ValidAnagram().validAnagram(s, t);
    cout<< boolalpha << result;
    return 0;
}
