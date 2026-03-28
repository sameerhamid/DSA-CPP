#include <iostream>
using namespace std;


long long reverseNum(long long n){
	long long ans = 0;
	for(int i=0; i<=n ;i++){
		ans = (n%10) + ans*10;
		n = n/10;
	}
	return ans;
}

// NOTE: Please do not modify this function
int main(){
	long long n;
	cin>>n;
	long long ans = reverseNum(n);
	cout<<ans<<endl;
}
