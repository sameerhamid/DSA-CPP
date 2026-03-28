#include <iostream>
using namespace std;

// Problem Description
// Given a sorted array of N distinct integers and a target value X, return the index if the target is found. If not found then return -1.

int searchTarget(int N,int A[],int X){
      int left = 0;
      int right = N-1;
      int mid = (left+right)/2;
      cout << mid << endl;

      while (left <= right)
      {
          if (A[mid] == X)
          {
              return mid;
          }
          if (A[mid] > X)
          {
              right = mid - 1;
              mid = (left + right) / 2;
          }
          if (A[mid] < X)
          {
              left = mid + 1;
              mid = (left + right) / 2;
          }
      }
      return -1;
}


int main(){
    int N,X;
    cin >> N >> X;

    int A[N];
    for(int i=0;i<N;i++)
    cin >> A[i];

    cout << searchTarget(N,A,X);
}
