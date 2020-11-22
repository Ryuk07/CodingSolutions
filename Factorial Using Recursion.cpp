Task: 
Program for factorial of a number
Last Updated: 24-07-2020

Factorial of a non-negative integer, is multiplication of all integers smaller than or equal to n. For example factorial of 6 is 6*5*4*3*2*1 which is 720.

Recursive Solution:
Factorial can be calculated using following recursive formula.


Solution:



#include <bits/stdc++.h>
using namespace std;				


int facto(int n){
	if(n==0){
		return 1;
	}
	else{
		return n*facto(n-1);
	}
}


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,result;
	cin>>n;
	result = facto(n);
	cout<<result;

	return 0;

}