Task: You have an array consisting of N integers a1,a2...aN

. You may perform the following operation zero or more times.

    Choose any index i

(1≤i≤N) and set ai:=ai+1

Determine the minimum number of operations you have to perform so that all pairwise differences in the resulting array are even. More formally, in the resulting array it should hold that, for every i
and j (1≤i,j≤N), ai−aj

is even.
Input:

    The first line contains a single integer T

— the number of test cases. The description of each test case is as follows.
The first line of each test case contains a single integer N
— the length of the array.
The second line of each test case contains N
integers, a1,a2...aN

    — the integers in the array.

Output:

For each test case output a new line containing a single integer — the minimum operations you must perform to make all the pairwise differences even.
Constraints

    1≤T≤1000

1≤N≤500
1≤ai≤105

Subtasks

Subtask #1 (100 points): original constraints
Sample Input:

2
2
2 4
3
4 1 2

Sample Output:

0
1

EXPLANATION:

Note that an integer which is divisible by 2
is considered even. For example, 0, 4 and −6 are even, but 5 and −3

are not.

In the first test case, 2−2=0
, 2−4=−2, 4−2=2, 4−4=0

, all of which are even. Thus we do not need to perform any operations.

In the second test case we may increment 1
. The pairwise differences then all become even. Thus one operation is required.



Solution:



#include <bits/stdc++.h>
using namespace std;	


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
    long long t;
    cin>>t;
    while(t--){
    	long long n,cnto=0,cnte=0,a;
    	cin>>n;
    	for(long long i=0;i<n;i++){
    		cin>>a;
    		if(a%2!=0){
    			cnto++;
    		}
    		else{
    			cnte++;
    		}
    	}
    	if(cnto>cnte){
    		cout<<cnte<<endl;
    	}
    	else{
    		cout<<cnto<<endl;
    	}
    }
    return 0;
}