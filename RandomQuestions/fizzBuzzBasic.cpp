#include<iostream>
using namespace std;

// Problem Description
// Write a program that outputs the string representation of numbers from 1 to N.

// But for multiples of three it should output "Fizz" instead of the number and for the multiples of five output “Buzz”. For numbers which are multiples of both three and five output “FizzBuzz”.

vector<string> fizzBuzz(int n) {
	vector<string> vec(n);
	for(int i=1; i<=n; i++){
		if(i%3==0 && i%5==0){
			vec[i-1] = "FizzBuzz";
		}else if(i%3==0){
			vec[i-1] = "Fizz";
		}else if(i%5==0){
			vec[i-1] = "Buzz";
		}else{
            vec[i-1] = to_string(i);
        }
	}
	return vec;
}

int main()
{
	int n;
	cin >> n;
	vector<string> answer = fizzBuzz(n);
    cout << "-------------------" << endl;
	for(int i = 0 ;i < answer.size() ; i++) {
		cout << answer[i] << "\n";
	}
	return 0;
}
