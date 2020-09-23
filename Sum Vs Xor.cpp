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




Solution(Brute Force Approach):


#include <iostream>
using namespace std;

int SumXor(long long n){
    long cnt = 0;
    for(long i=0;i<=n;i++){
        long res = 0, sum =0;
        res = i^n;
        sum = i+n;
        if(sum == res){
            cnt++;
        } 
    }
    return cnt;
}

int main(){
    long n;
    cin>>n;
    int result = SumXor(n);
    cout<<result;
    return 0;
}
