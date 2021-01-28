Task: A magic number is a number formed by concatenation of numbers 1, 14 and 144. We can use each of these numbers any number of times. Therefore 14144, 141414 and 1411 are magic numbers but 1444, 514 and 414 are not.

You're given a number. Determine if it is a magic number or not.
Input

The first line of input contains an integer n, (1 ≤ n ≤ 109). This number doesn't contain leading zeros.
Output

Print "YES" if n is a magic number or print "NO" if it's not.
Examples
Input
Copy

114114

Output
Copy

YES

Input
Copy

1111

Output
Copy

YES

Input
Copy

441231

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
	
    
    int flag=0;
    string s;
    cin>>s;
    for(int i=0;i<s.size();i++){
    	if(s[i]=='1'&&s[i+1]=='4'&&s[i+2]=='4'){
    		flag=1;
    		i+=2;
    	}
    	else if(s[i]=='1'&&s[i+1]=='4'){
    		flag=1;
    		i+=1;
    	}
    	else if(s[i]=='1'){
    		flag=1;
    	}
    	else{
    		flag=0;
    		break;
    	}
    }
    if(flag==0){
    	cout<<"NO"<<endl;
    }
    else{
    	cout<<"YES"<<endl;
    }
    return 0;
}

