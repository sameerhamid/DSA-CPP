#include <iostream>
#include <set>
using namespace std;

// Problem Description
// You are given a list of n integers, and your task is to calculate the number of distinct values in the list.

int distinctNumbers(vector<int> &v)
{
    // vector<int> vec;
    // bool isPresent = false;
    // for (int i = 0; i < v.size(); i++)
    // {
    //     isPresent = false;
    //     if (i == 0)
    //     {
    //         vec.push_back(v[0]);
    //     }
    //     for (int j = 0; j < vec.size(); j++)
    //     {

    //         if (v[i] == vec[j])
    //         {
    //             isPresent = true;
    //             break;
    //         }
    //     }
    //     if (!isPresent)
    //     {
    //         vec.push_back(v[i]);
    //     }
    // }
    // for (int i = 0; i < vec.size(); i++)
    // {
    //     cout << vec[i] << " ";
    // }
    // cout << endl;
    // //   cout << vec.size();
    // return vec.size();

       set<int> mySet;
      for(int i=0; i<v.size(); i++){
               mySet.insert(v[i]);
      }
      return mySet.size();
}

int main()
{
    int n;
    cin >> n;
    vector<int> v(n);
    for (int i = 0; i < n; i++)
        cin >> v[i];

    int res = distinctNumbers(v);
    cout << res << "\n";
}
