Task: Jeff's got n cards, each card contains either digit 0, or digit 5. Jeff can choose several cards and put them in a line so that he gets some number. What is the largest possible number divisible by 90 Jeff can make from the cards he's got?

Jeff must make the number without leading zero. At that, we assume that number 0 doesn't contain any leading zeroes. Jeff doesn't have to use all the cards.
Input

The first line contains integer n (1 ≤ n ≤ 103). The next line contains n integers a1, a2, ..., an (ai = 0 or ai = 5). Number ai represents the digit that is written on the i-th card.
Output

In a single line print the answer to the problem — the maximum number, divisible by 90. If you can't make any divisible by 90 number from the cards, print -1.
Examples
Input
Copy

4
5 0 5 0

Output
Copy

0

Input
Copy

11
5 5 5 5 5 5 5 5 0 5 5

Output
Copy

5555555550

Note

In the first test you can make only one number that is a multiple of 90 — 0.

In the second test you can make number 5555555550, it is a multiple of 90.


Solution(1):


#include <bits/stdc++.h>
using namespace std;	


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
    
    long long n,cnt0=0,cnt5=0;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        int a;
        cin >> a;
 
        if (a == 0) ++cnt0;
        else ++cnt5;
    }
 
    if (cnt0 == 0) {
        cout << "-1\n";
        return 0;
    }
 
    if (cnt5 / 9 == 0) {
        cout << "0\n";
        return 0;
    }
 
    for (int i = 0; i < cnt5/9; ++i) cout << "555555555";
    for (int i = 0; i < cnt0; ++i) cout << 0;
    cout <<endl;
    return 0;
}



Solution(2):



#include <bits/stdc++.h>
using namespace std;	


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
    
    long long n,cntz=0,cntf=0,x=0,a,sum=0;
    cin>>n;
    for(long long i=0;i<n;i++){
    	cin>>a;
    	if(a==0){
    		cntz++;
    	}
    	else{
    		sum+=a;
    		cntf++;
    	}
    }
    if(cntz==0){
    	cout<<-1<<endl;
    }
    else{
    	for(int i=0;i<cntf;i++){
    		if(sum%9!=0){
    			sum-=5;
    			x++;
    		}
    		else{
    			break;
    		}
    	}
    	if(sum==0){
    		cout<<0<<endl;
    	}
    	else{
    		for(int i=0;i<(cntf-x);i++){
    			cout<<5;
    		}
    		for(int i=0;i<cntz;i++){
    			cout<<0;
    		}
    		cout<<endl;
    	}
    }
    return 0;
}

