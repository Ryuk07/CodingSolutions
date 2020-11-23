Task: Write a program to reverse an array or string using Recursion
Last Updated: 08-09-2020
 

Given an array (or string), the task is to reverse the array/string.
Examples : 
 

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}


Solution:

#include <bits/stdc++.h>
using namespace std;				


vector<int> reverse(vector<int> v, int i,int j){
	if(i<j)
	{
		swap(v[i],v[j]);
		return reverse(v,i+1,j-1);
	}
	else{
		return v;
	}
}

int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,a;
	cin>>n;
	vector<int> v,d;
	for(int q=0;q<n;q++){
		cin>>a;
		v.push_back(a);
	}
	d = reverse(v,0,n-1);
	for(int q=0;q<n;q++){
		cout<<d[q]<<" ";
	}
	return 0;

}


