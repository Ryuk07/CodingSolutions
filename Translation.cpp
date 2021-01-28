Task: The translation from the Berland language into the Birland language is not an easy task. Those languages are very similar: a berlandish word differs from a birlandish word with the same meaning a little: it is spelled (and pronounced) reversely. For example, a Berlandish word code corresponds to a Birlandish word edoc. However, it's easy to make a mistake during the «translation». Vasya translated word s from Berlandish into Birlandish as t. Help him: find out if he translated the word correctly.
Input

The first line contains word s, the second line contains word t. The words consist of lowercase Latin letters. The input data do not consist unnecessary spaces. The words are not empty and their lengths do not exceed 100 symbols.
Output

If the word t is a word s, written reversely, print YES, otherwise print NO.
Examples
Input
Copy

code
edoc

Output
Copy

YES

Input
Copy

abb
aba

Output
Copy

NO

Input
Copy

code
code

Output
Copy

NO



Solution:


#include <bits/stdc++.h>
using namespace std;	


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
    
    string s,t,ans;
    cin>>s>>t;
    int n = s.size();
    for(int i=n-1;i>=0;i--){
    	ans+=s[i];
    }
    if(t==ans){
    	cout<<"YES"<<endl;
    }
    else{
    	cout<<"NO"<<endl;
    }
    return 0;
}

