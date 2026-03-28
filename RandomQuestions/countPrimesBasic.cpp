#include <iostream>
using namespace std;


// Problem Description
// Count the number of prime numbers less than a non-negative number, n.

class CountPrimes {
public:
    int countPrimes(int n) {
        int ans = 0;
        for(int i =2; i< n;i++){
            int isPrime = true;
            for(int j=2; j<=i/2; j++){
                if(i % j==0){
                   isPrime = false;
                   break;
               }
            }
           if(isPrime){
                ans++;
            }
        }
        return ans;
    }
};

int main() {
	int n;
	cin >> n;
	int result = CountPrimes().countPrimes(n);
	cout << result;
	return 0;
}


int main() {
	int n;
	cin >> n;
	int result = CountPrimes().countPrimes(n);
	cout << result;
	return 0;
}
