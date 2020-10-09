Task: There are n piles of stones, where the ith pile has ai stones. You need to collect the maximum number of stones from these piles, but you must fulfill the following condition:

Let's say you pick xi(1<=i<=n)stones from the ith pile, then

x1+x3+x5+.....=x2+x4+x6+...
0<=xi<=ai

For example, if n=3 and a=[2,3,4], you can pick the stones as x=[1,2,1] becuase x1+x3 = 1+1 = 2 and x2 = 2

Find the maximum total number of stones you can pick.

Input Format

The first line of input contains a single integer n denoting the number of piles.

The second line of input contains n space separated integers ai, where the ith integer denoted the number of stones in ith pile.

Constraints

2<=n<=10^5
1<=ai<=10^3

Output Format

Print a single integer denoting the maximum total number of stones you can pick.

Sample Input 0

4
5 1 1 4

Sample Output 0

10



Solution:



#include <iostream>
#include <algorithm>
using namespace std;
    
int main(){
    int n,a,max=0,s=0,b=0,c=0;;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>a;
        max+=a;
        if(i%2==0){
            s+=a;
        }
        else{
            b+=a;
        }
    }
    if(s==b){
        cout<<max<<endl;
    }
    else{
        c=abs(s-b);
        max=max-c;
        cout<<max<<endl;
    }
    return 0;
}
