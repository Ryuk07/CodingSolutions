Task: Finally, a COVID vaccine is out on the market and the Chefland government has asked you to form a plan to distribute it to the public as soon as possible. There are a total of N people with ages a1,a2,…,aN

.

There is only one hospital where vaccination is done and it is only possible to vaccinate up to D
people per day. Anyone whose age is ≥80 or ≤9

is considered to be at risk. On each day, you may not vaccinate both a person who is at risk and a person who is not at risk. Find the smallest number of days needed to vaccinate everyone.
Input

    The first line of the input contains a single integer T

denoting the number of test cases. The description of T
test cases follows.
The first line of each test case contains two space-separated integers N
and D
.
The second line contains N
space-separated integers a1,a2,…,aN

    .

Output

For each test case, print a single line containing one integer ― the smallest required number of days.
Constraints

    1≤T≤10

1≤N≤104
1≤D≤105
1≤ai≤100
for each valid i

Subtasks

Subtask #1 (100 points): original constraints
Example Input

2
10 1
10 20 30 40 50 60 90 80 100 1
5 2
9 80 27 72 79

Example Output

10
3

Explanation

Example case 1: We do not need to worry about how the people are grouped, since only one person can be vaccinated in a single day. We require as many days as there are people.

Example case 2: There are two people at risk and three people who are not at risk. One optimal strategy is to vaccinate the two people at risk on day 1
and the remaining three on the next 2 days.


Solution:


#include <bits/stdc++.h>
using namespace std;	


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin>>t;
	while(t--){
		long long  n,d,a,q=0,r=0;
		vector<int> v,p;
		cin>>n>>d;
		for(int i=0;i<n;i++){
			cin>>a;
			if(a>=80||a<=9){
				v.push_back(a);
			}
			else{
				p.push_back(a);
			}
		}
		if(v.size()!=0){
			if(v.size()%d!=0){
				q=v.size()/d+1;
			}
			else{
				q = v.size()/d;
			}
		}
		if(p.size()!=0){
			if(p.size()%d!=0){
				r=p.size()/d+1;
			}
			else{
				r = p.size()/d;
			}
		}
		cout<<q+r<<endl;
	}
	return 0;
}

