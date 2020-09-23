Task:  Given an integer n, find each x such that:

0<=x<=n
n+x = n xor x

where denotes the bitwise XOR operator. Print the number of x's satisfying the criteria.

For example, if n=4, there are four values:

4+0 = 4 xor 0 = 4
4+1 = 4 xor 1 = 5
4+2 = 4 xor 2 = 6
4+3 = 4 xor 3 = 7.

Function Description

Complete the sumXor function in the editor below. It should return the number of values determined, as an integer.

sumXor has the following parameter(s):
- n: an integer

Input Format

A single integer, n.

Constraints

0<=n<=10^5

Subtasks

0<=n<=10^15 for 60% of the maximum score.

Output Format

Print the total number of integers

satisfying the criteria.

Sample Input 0

5

Sample Output 0




Solution(With the help of hints):


#include <iostream>
using namespace std;

int FindMsb(long long int n){
    long long int f = 1;
    for(int i=55;i>=0;i--){
        if((n&(f<<i))){
            return i;
        }
    }
    return 0;
}

int main(){
    long long int n;
    long long int res = 1;
    cin>>n;
    int msb = FindMsb(n);
    int cnt = 0;
    for(int i=0;i<msb;i++){
        long long f=1;
        if((n&(f<<i))==0){
            cnt++;
        }
    }
    long long int f=1;
    cout<<(f<<cnt);
    return 0;
}