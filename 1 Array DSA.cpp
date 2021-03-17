Task: Write a program to reverse an array or string

    Difficulty Level : Basic
    Last Updated : 08 Sep, 2020

 

Given an array (or string), the task is to reverse the array/string.
Examples : 
 

Input  : arr[] = {1, 2, 3}
Output : arr[] = {3, 2, 1}

Input :  arr[] = {4, 5, 1, 2}
Output : arr[] = {2, 1, 5, 4}





Solution:


#include <bits/stdc++.h>
using namespace std;	


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
    for(int i=n-1;i>=0;i--){
    	cout<<v[i]<<" ";
    }
	return 0;

}

