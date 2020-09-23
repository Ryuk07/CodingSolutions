Task:  An array, A, is defined as follows:

A[0] = 0
A[x] = A[x-1] XOR x for x>0, where ^ is the symbol for XOR

You will be given a left and right index lr. You must determine the XOR sum of the segment of A as

A[l]^A[l+1]^.....^A[r-1]^A[r].

For example, A = [0,1,3,0,4,1,7,0,8]. The segment from l=1 to r=4 sums to 1^3^0^4=6.

Print the answer to each question.

Function Description

Complete the xorSequence function in the editor below. It should return the integer value calculated.

xorSequence has the following parameter(s):

    l: the lower index of the range to sum
    r: the higher index of the range to sum

Input Format

The first line contains an integer q, the number of questions.
Each of the next q lines contains two space-separated integers, l[i] and r[i], the inclusive left and right indexes of the segment to query.

Constraints

1<=q<=10^5
1<=l[i]<=r[i]<=10^5

Output Format

On a new line for each test case, print the XOR-Sum of A's elements in the inclusive range between indices l[i] and r[i].

Sample Input 0

3
2 4
2 8
5 9

Sample Output 0

7
9
15



Solution(Help from google and article):



#include<bits/stdc++.h>
using namespace std;
long long uptonxor(long long n)
{
    int a=n%8;
    if(a==0 || a==1)
        return n;
    else if(a==2 || a==3)
        return 2;
    else if(a==4 || a==5)
        return n+2;
    return 0;
}
int main()
{
    int q;
    cin>>q;
    while(q--)
    {
        long long l,r;
        cin>>l>>r;
        long long ans;
        ans=uptonxor(l-1)^uptonxor(r);
        cout<<ans<<endl;
    }
    return 0;
}