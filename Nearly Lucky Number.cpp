Task: Petya loves lucky numbers. We all know that lucky numbers are the positive integers whose decimal representations contain only the lucky digits 4 and 7. For example, numbers 47, 744, 4 are lucky and 5, 17, 467 are not.

Unfortunately, not all numbers are lucky. Petya calls a number nearly lucky if the number of lucky digits in it is a lucky number. He wonders whether number n is a nearly lucky number.
Input

The only line contains an integer n (1 ≤ n ≤ 1018).

Please do not use the %lld specificator to read or write 64-bit numbers in С++. It is preferred to use the cin, cout streams or the %I64d specificator.
Output

Print on the single line "YES" if n is a nearly lucky number. Otherwise, print "NO" (without the quotes).
Examples
Input
Copy

40047

Output
Copy

NO

Input
Copy

7747774

Output
Copy

YES

Input
Copy

1000000000000000000

Output
Copy

NO

Note

In the first sample there are 3 lucky digits (first one and last two), so the answer is "NO".

In the second sample there are 7 lucky digits, 7 is lucky number, so the answer is "YES".

In the third sample there are no lucky digits, so the answer is "NO".



Solution:


#include <bits/stdc++.h>
using namespace std;	


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
    long long int n,cnt=0,a;
    cin>>n;
    while(n!=0){
    	a=n%10;
    	n=n/10;
    	if(a==4||a==7){
    		cnt++;
    	}
    }
    if(cnt==4||cnt==7){
    	cout<<"YES";
    }
    else{
    	cout<<"NO";
    }
	return 0;
}

