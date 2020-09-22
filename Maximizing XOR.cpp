Task:  Given two integers, l and r, find the maximal value of a xor b, written a^b, where a and b satisfy the following condition: l<=a<=b<=r

For example, if l=11 and r=12, then

11^11=0
11^12=7
12^12=0

Our maximum value is 7.

Function Description

Complete the maximizingXor function in the editor below. It must return an integer representing the maximum value calculated.

maximizingXor has the following parameter(s):

    l: an integer, the lower bound, inclusive
    r: an integer, the upper bound, inclusive

Input Format

The first line contains the integer l.
The second line contains the integer r.

Constraints

1<=l<=r<=10^3

Output Format

Return the maximal value of the xor operations for all permutations of the integers from
to

, inclusive.

Sample Input 0

10
15

Sample Output 0

7



Solution:


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    int l,r,a;
    cin>>l>>r;
    vector<int> v;
    for(int i =l;i<=r;i++){
        for(int j=l;j<=r;j++){
            a = i^j;
            v.push_back(a);
        }
    }
    int max = *max_element(v.begin(),v.end());
    cout<<max;
    return 0;
}
