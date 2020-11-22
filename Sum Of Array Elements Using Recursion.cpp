Task: 
Sum of array elements using recursion
Last Updated: 03-08-2018

Given an array of integers, find sum of array elements using recursion.

Examples:

Input : A[] = {1, 2, 3}
Output : 6
1 + 2 + 3 = 6

Input : A[] = {15, 12, 13, 10}
Output : 50

Recommended: Please solve it on “PRACTICE ” first, before moving on to the solution.

We have discussed iterative solution in below post.
Sum of elements in a given array

In this post, recursive solution is discussed.



Solution:


#include <bits/stdc++.h>
using namespace std;				


int facto(vector<int> &v, int n){
	if(n==0){
		return v[0];
	}
	else{
		return v[n]+facto(v,n-1);
	}
}


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,a,result;
	cin>>n;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>a;
		v.push_back(a);
	}
	result = facto(v,n-1);
	cout<<result;

	return 0;

}