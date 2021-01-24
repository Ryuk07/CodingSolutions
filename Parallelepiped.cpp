Task: You've got a rectangular parallelepiped with integer edge lengths. You know the areas of its three faces that have a common vertex. Your task is to find the sum of lengths of all 12 edges of this parallelepiped.
Input

The first and the single line contains three space-separated integers — the areas of the parallelepiped's faces. The area's values are positive ( > 0) and do not exceed 104. It is guaranteed that there exists at least one parallelepiped that satisfies the problem statement.
Output

Print a single number — the sum of all edges of the parallelepiped.
Examples
Input
Copy

1 1 1

Output
Copy

12

Input
Copy

4 6 6

Output
Copy

28

Note

In the first sample the parallelepiped has sizes 1 × 1 × 1, in the second one — 2 × 2 × 3.



Solution:


#include <bits/stdc++.h>
using namespace std;	


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
    
    long long s1,s2,s3,a,b,c,sum=0;
    cin>>s1>>s2>>s3;
    a = sqrt((s1*s2)/s3);
    b = sqrt((s2*s3)/s1);
    c = sqrt((s1*s3)/s2);
    sum = 4*(a+b+c);
    cout<<sum<<endl;
    return 0;
}

