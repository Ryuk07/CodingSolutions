Task: Capitalization is writing a word with its first letter as a capital letter. Your task is to capitalize the given word.

Note, that during capitalization all the letters except the first one remains unchanged.
Input

A single line contains a non-empty word. This word consists of lowercase and uppercase English letters. The length of the word will not exceed 103.
Output

Output the given word after capitalization.
Examples
Input
Copy

ApPLe

Output
Copy

ApPLe

Input
Copy

konjac

Output
Copy

Konjac



Solution 1:


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
    	if(i==0){
    		putchar(toupper(s[0]));
    	}
    	else{
    		cout<<s[i];
    	}
    }
	return 0;
}



solution 2:


#include <bits/stdc++.h>
using namespace std;	


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
    string s;
    cin>>s;
    s[0]=toupper(s[0]);
    cout<<s;
	return 0;
}

