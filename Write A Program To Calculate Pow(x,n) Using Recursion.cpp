Task: 
Write a program to calculate pow(x,n)
Last Updated: 09-11-2020

Given two integers x and n, write a function to compute xn. We may assume that x and n are small and overflow doesn’t happen.

Examples :

Input : x = 2, n = 3
Output : 8

Input : x = 7, n = 2
Output : 49


Solution:

#include <bits/stdc++.h>
using namespace std;				


int pow(int x, int n){
	if(n==1){
		return x;
	}
	else{
		return x*pow(x,n-1);
	}
}


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,x,result;
	cin>>x>>n;
	vector<int> v;
	result = pow(x,n);
	cout<<result;

	return 0;

}