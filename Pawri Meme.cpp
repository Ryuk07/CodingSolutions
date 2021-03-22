Task: Lately, Chef has been inspired by the "pawri" meme. Therefore, he decided to take a string S

and change each of its substrings that spells "party" to "pawri". Find the resulting string.
Input

    The first line of the input contains a single integer T

denoting the number of test cases. The description of T
test cases follows.
The first and only line of each test case contains a single string S

    .

Output

For each test case, print a single line containing the string after it is modified by Chef.
Constraints

    1≤T≤10

1≤|S|≤105
S

    contains only lowercase English letters

Example Input

3
part
partypartiparty
yemaihuyemericarhaiauryahapartyhorahihai

Example Output

part
pawripartipawri
yemaihuyemericarhaiauryahapawrihorahihai

Explanation

Example case 1: There is no substring "party" in the original string.

Example case 2: The original string has 2

substrings "party".

Example case 3: There is only a single substring "party" in the original string.


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
    	string s;
    	cin>>s;
    	for(int i=0;i<s.size();i++){
    		if(s[i]=='p' && s[i+1]=='a' && s[i+2]=='r' && s[i+3]=='t' && s[i+4]=='y'){
    			s[i+2]='w';
    			s[i+3]='r';
    			s[i+4]='i';
    		}
    	}
    	cout<<s<<endl;
    }    	
    return 0;

}

