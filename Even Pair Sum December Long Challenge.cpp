Task: You are given two positive integers A and B. Find the number of pairs of positive integers (X,Y) such that 1≤X≤A, 1≤Y≤B and X+Y

is even.
Input

    The first line of the input contains a single integer T

denoting the number of test cases. The description of T
test cases follows.
The first and only line of each test case contains two space-separated integers A
and B

    .

Output

For each test case, print a single line containing one integer ― the number of valid pairs.
Constraints

    1≤T≤1,000

1≤A,B≤109

Subtasks

Subtask #1 (10 points): A,B≤10

Subtask #2 (10 points): A,B≤1,000

Subtask #3 (80 points): original constraints
Example Input

4
1 1
2 3
4 6
8 9

Example Output

1
3
12
36



Solution:


#include <bits/stdc++.h>
using namespace std;	


int main(){
	int t;
	cin>>t;
	while(t--){
		long long int a,b,ox=0,ex=0,oy=0,ey=0,sum=0;
		cin>>a>>b;
		if(a%2==0){
			ox=a/2;
			ex=a/2;
		}
		else{
			ox=(a/2)+1;
			ex=a/2;
		}
		if(b%2==0){
			oy=b/2;
			ey=b/2;
		}
		else{
			oy=(b/2)+1;
			ey=b/2;
		}
		sum = (ox*oy)+(ex*ey);
		cout<<sum<<endl;
	}
	return 0;
}

