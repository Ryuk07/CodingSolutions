Task: Given a sorted array arr[] of n elements, write a function to search a given element x in arr[].

A simple approach is to do linear search.The time complexity of above algorithm is O(n). Another approach to perform the same task is using Binary Search. 


Solution:


#include <bits/stdc++.h>
using namespace std;	


int binarsearch(vector<int> &v, int start, int end, int x){
	if(start>end){
		return -1;
	}
	int mid = start + (end-start)/2;
	if(v[mid] == x){
		return mid;
	}
	else if(v[mid] > x){
		return binarsearch(v,start,mid-1,x);
	}
	else{
		return binarsearch(v,mid+1,end,x);
	}
}


int main(){
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif

	int n,a,x,result;
	cin>>n>>x;
	vector<int> v;
	for(int i=0;i<n;i++){
		cin>>a;
		v.push_back(a);
	}
	result = binarsearch(v,0,n-1,x);
	if(result!=-1){
		cout<<result<<endl;
	}
	return 0;
}