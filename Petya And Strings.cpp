Task: Little Petya loves presents. His mum bought him two strings of the same size for his birthday. The strings consist of uppercase and lowercase Latin letters. Now Petya wants to compare those two strings lexicographically. The letters' case does not matter, that is an uppercase letter is considered equivalent to the corresponding lowercase letter. Help Petya perform the comparison.
Input

Each of the first two lines contains a bought string. The strings' lengths range from 1 to 100 inclusive. It is guaranteed that the strings are of the same length and also consist of uppercase and lowercase Latin letters.
Output

If the first string is less than the second one, print "-1". If the second string is less than the first one, print "1". If the strings are equal, print "0". Note that the letters' case is not taken into consideration when the strings are compared.
Examples
Input
Copy

aaaa
aaaA

Output
Copy

0

Input
Copy

abs
Abz

Output
Copy

-1

Input
Copy

abcdefg
AbCdEfF

Output
Copy

1


Solution:


#include <bits/stdc++.h>
using namespace std;	


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
    
    int flag=0;
    string a,b;
    cin>>a>>b;
    int n=a.size();
    for(int i=0;i<n;i++){
    	if(isupper(a[i])){
    		a[i]= tolower(a[i]);
    	}
    	if(isupper(b[i])){
    		b[i]= tolower(b[i]);
    	}
    	if(a[i]<b[i]){
    		cout<<-1<<endl;
    		flag=1;
    		break;
    	}
    	else if(a[i]>b[i]){
    		cout<<1<<endl;
    		flag=1;
    		break;
    	}
    }
    if(flag==0){
    	cout<<0<<endl;
    }
	return 0;
}

