Task: Program to check if an array is sorted or not (Iterative and Recursive)

Given an array of size n, write a program to check if it is sorted in ascending order or not. Equal values are allowed in an array and two consecutive equal values are considered sorted.

Examples: 

Input : 20 21 45 89 89 90
Output : Yes

Input : 20 20 45 89 89 90
Output : Yes

Input : 20 20 78 98 99 97
Output : No



Solution:


#include <bits/stdc++.h>
using namespace std;	


bool sorted(vector<int> &v, int n){
	if(n==1||n==0){
		return true;
	}
	for(int i=0;i<n;i++){
		if(v[i]>v[i+1]){
			return false;
		}
	}
	return true;
}			



int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,a;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>a;
		v.push_back(a);
	}
	if(sorted(v,n)){
		cout<<"YES"<<endl;
	}
	else{
		cout<<"NO"<<endl;
	}
	return 0;
}
