Task: Chef is playing Need For Speed. Currently, his car is running on a straight road with a velocity U metres per second and approaching a 90∘ turn which is S metres away from him. To successfully cross the turn, velocity of the car when entering the turn must not exceed V

metres per second.

The brakes of Chef's car allow him to slow down with a deceleration (negative acceleration) not exceeding A
metres per squared second. Tell him whether he can cross the turn successfully. The velocity v when entering the turn can be determined from Newton's 2nd law to be v2=U2+2⋅a⋅S if the car is moving with a uniform acceleration a

.
Input

    The first line of the input contains a single integer T

denoting the number of test cases. The description of T
test cases follows.
The first and only line of each test case contains four space-separated integers U
, V, A and S

    .

Output

For each test case, print a single line containing the string "Yes" if Chef can cross the turn successfully or "No" if he cannot (without quotes).

You may print each character of each string in uppercase or lowercase (for example, the strings "yEs", "yes", "Yes" and "YES" will all be treated as identical).
Constraints

    1≤T≤105

1≤U,V,A,S≤104

Subtasks

Subtask #1 (100 points): original constraints
Example Input

3
1 1 1 1
2 1 1 1
2 2 1 1

Example Output

Yes
No
Yes

Explanation

Example case 1: Since U=V=1

, Chef does not need to brake and will be able to turn successfully.

Example case 2: The smallest velocity Chef's car can have even with the maximum deceleration is 2⋅2−2⋅1⋅1−−−−−−−−−−−√=2–√

, which is greater than the maximum allowed velocity for a safe turn.

Example case 3: The smallest velocity Chef's car can have with the maximum deceleration is again 2–√
, which is smaller than the maximum allowed velocity for a safe turn.




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
   		long long u,v,a,s;
   		long double y=0;
   		cin>>u>>v>>a>>s;
		y= sqrt(u*u - (2*a*s));
		if(y>v){
			cout<<"No"<<endl;
		}
		else{
			cout<<"Yes"<<endl;
		}
   	}
    return 0;

}

