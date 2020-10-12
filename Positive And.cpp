Task: A permutation p1,p2...pN of {1,2,...,N} is beautiful if pi&pi+1 is greater than 0 for every 1≤i<N . You are given an integer N, and your task is toconstruct a beautiful permutation of length N

or determine that it's impossible.

Note that a&b
denotes the bitwise AND of a and b

.
Input:

First line will contain T
, number of testcases. Then the testcases follow. Each testcase contains a single line of input, an integer N

.
Output:

For each test case output −1
if there is no suitable permutation of length N, otherwise output N

integers in a single line which form a beautiful permutation. If there are multiple answers output any of them.
Constraints

    1≤N≤105

The sum of N
over all test cases does not exceed 106

Subtasks

    50 points : 1≤N,T≤9

    50 points : Original constraints

Sample Input:

3
4
3
5

Sample Output:

-1
1 3 2
2 3 1 5 4


Solution:


#include <bits/stdc++.h>
using namespace std;
#define int long long
int32_t main() {
	int t;cin>>t;
	while(t--){
	    int i,n,j;cin>>n;
	    bool flag=0;int x=n;
	    if(n==1){
	        cout<<"1\n";continue;
	    }
	    while(x>1){
	        if(x&1){
	            flag=1;break;
	        }
	        x>>=1;
	    }
	    if(flag==0){
	        cout<<"-1\n";continue;
	    }
	    int array1[n+1];
	    array1[1]=2;array1[2]=3;array1[3]=1;
	    for(i=4;i<=n;i++){
	        array1[i]=i;
	    }
	    x=4;
	    while(x<n){
	        int te=array1[x];
	        array1[x]=array1[x+1];
	        array1[x+1]=te;
	        x=x*2;
	    }
	    for(i=1;i<=n;i++)cout<<array1[i]<<' ';cout<<endl;
	}
	return 0;
}