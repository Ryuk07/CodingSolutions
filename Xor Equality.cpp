Task: For a given N, find the number of ways to choose an integer x from the range [0,2N−1] such that x⊕(x+1)=(x+2)⊕(x+3), where ⊕

denotes the bitwise XOR operator.

Since the number of valid x
can be large, output it modulo 109+7

.
Input

    The first line contains an integer T

, the number of test cases. Then the test cases follow.
The only line of each test case contains a single integer N

    .

Output

For each test case, output in a single line the answer to the problem modulo 109+7

.
Constraints

    1≤T≤105

1≤N≤105

Subtasks

Subtask #1 (100 points): Original Constraints
Sample Input

2
1
2

Sample Output

1
2

Explanation

Test Case 1
: The possible values of x are {0}

.

Test Case 2
: The possible values of x are {0,2}.




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
		long long n,x=2,y,temp=1,m=1000000007;
		cin>>n;
		y=n-1;
		while(y>0){
			if(y%2==1){
				temp=(x*temp)%m;
			}
			x=(x*x)%m;
			y=y/2;
		}
		cout<<temp<<endl;
	}
	return 0;
}

