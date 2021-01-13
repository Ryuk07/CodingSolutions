Task: There are n stones on the table in a row, each of them can be red, green or blue. Count the minimum number of stones to take from the table so that any two neighboring stones had different colors. Stones in a row are considered neighboring if there are no other stones between them.
Input

The first line contains integer n (1 ≤ n ≤ 50) — the number of stones on the table.

The next line contains string s, which represents the colors of the stones. We'll consider the stones in the row numbered from 1 to n from left to right. Then the i-th character s equals "R", if the i-th stone is red, "G", if it's green and "B", if it's blue.
Output

Print a single integer — the answer to the problem.
Examples
Input
Copy

3
RRG

Output
Copy

1

Input
Copy

5
RRRRR

Output
Copy

4

Input
Copy

4
BRBG

Output
Copy

0



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
    string s;
    cin>>s;
    for(int i=0;i<n-1;i++){
    	if(s[i]==s[i+1]){
    		cnt++;
    	}
    }
    cout<<cnt;
	return 0;
}

