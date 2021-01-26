Task: Recently, a chaotic virus Hexadecimal advanced a new theorem which will shake the Universe. She thinks that each Fibonacci number can be represented as sum of three not necessary different Fibonacci numbers.

Let's remember how Fibonacci numbers can be calculated. F0 = 0, F1 = 1, and all the next numbers are Fi = Fi - 2 + Fi - 1.

So, Fibonacci numbers make a sequence of numbers: 0, 1, 1, 2, 3, 5, 8, 13, ...

If you haven't run away from the PC in fear, you have to help the virus. Your task is to divide given Fibonacci number n by three not necessary different Fibonacci numbers or say that it is impossible.
Input

The input contains of a single integer n (0 ≤ n < 109) — the number that should be represented by the rules described above. It is guaranteed that n is a Fibonacci number.
Output

Output three required numbers: a, b and c. If there is no answer for the test you have to print "I'm too stupid to solve this problem" without the quotes.

If there are multiple answers, print any of them.
Examples
Input
Copy

3

Output
Copy

1 1 1

Input
Copy

13

Output
Copy

2 3 8



Solution:


#include <bits/stdc++.h>
using namespace std;	


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
    
    long long n,j=0,i,a,b;
    cin>>n;
    vector<int> v;
    if(n==0){
    	cout<<0<<" "<<0<<" "<<0<<endl;
    }
    else if(n==1){
    	cout<<0<<" "<<0<<" "<<1<<endl;
    }
    else{
    	v.push_back(0);
    	v.push_back(1);
    	while(i<n){
    		i=v[j]+v[j+1];
    		if(i<n){
    			v.push_back(i);
    		}
    		j++;
    	}
    	a=v.size()-1;
    	b=v.size()-2;
    	cout<<0<<" "<<v[b]<<" "<<v[a]<<endl;
    }
    return 0;
}

