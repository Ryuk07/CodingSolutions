TasK:  and M, find the number of ordered pairs (a,b) such that 1≤a<b≤N and ((M mod a) mod b)=((M mod b) mod a)

.
Input

    The first line contains an integer T

, the number of test cases. Then the test cases follow.
The only line of each test case contains two integers N
, M

    .

Output

For each testcase, output in a single line the answer to the problem.
Constraints

    1≤T≤1000

2≤N≤106
1≤M≤5⋅105
The sum of N
over all test cases does not exceed 106

    .

Note: Multiplier for JAVA for this problem is reduced to 1.25
instead of usual 2

.
Subtasks

Subtask #1 (10 points):

    1≤T≤10

2≤N≤103
1≤M≤105

Subtask #2 (40 points):

    1≤T≤100

2≤N≤105
1≤M≤105
The sum of N
over all test cases does not exceed 106

    .

Subtask #3 (50 points): Original Constraints
Sample Input

3
3 5
3 6
3 10

Sample Output

2
3
2

Explanation

Test Case 1
: The valid pairs are {(1,2),(1,3)}

.

Test Case 2
: The valid pairs are {(1,2),(1,3),(2,3)}

.

Test Case 3
: The valid pairs are {(1,2),(1,3)}

.




Solution:





#include <bits/stdc++.h>
#define ll long long
using namespace std;	


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	ll t;
	cin>>t;
	while(t--){
		ll n,m;
		cin>>n>>m;
		ll count=0;
		vector<long long> mod(n+1,1);
		for(ll a=2;a<=n;a++){
			ll x=m%a;
			count+=mod[x];
			for(ll b=x;b<=n;b+=a){
				mod[b]++;
			}
		}
		cout<<count<<endl;
	}
	return 0;
}


