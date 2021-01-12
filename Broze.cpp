Task: Ternary numeric notation is quite popular in Berland. To telegraph the ternary number the Borze alphabet is used. Digit 0 is transmitted as «.», 1 as «-.» and 2 as «--». You are to decode the Borze code, i.e. to find out the ternary number given its representation in Borze alphabet.
Input

The first line contains a number in Borze code. The length of the string is between 1 and 200 characters. It's guaranteed that the given string is a valid Borze code of some ternary number (this number can have leading zeroes).
Output

Output the decoded ternary number. It can have leading zeroes.
Examples
Input
Copy

.-.--

Output
Copy

012

Input
Copy

--.

Output
Copy

20

Input
Copy

-..-.--

Output
Copy

1012



Solution:


#include <bits/stdc++.h>
using namespace std;	
 
 
int main(){
 
	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
    string s;
    cin>>s;
    	for(int i=0;i<s.size();i++){
    		if(s[i]=='-'&&s[i+1]=='-'){
    			cout<<2;
    			i++;
    		}
    		else if(s[i]=='-'&&s[i+1]=='.'){
    			cout<<1;
    			i++;
    		}
    		else{
    			cout<<0;
    		}
    	}
	return 0;
}