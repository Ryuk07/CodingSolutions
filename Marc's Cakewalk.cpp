Task: Marc loves cupcakes, but he also likes to stay fit. Each cupcake has a calorie count, and Marc can walk a distance to expend those calories. If Marc has eaten j cupcakes so far, after eating a cupcake with c calories he must walk at least 2^j*c miles to maintain his weight.

For example, if he eats 3 cupcakes with calorie counts in the following order: [5,10,7], the miles he will need to walk are (2^0*5) + (2^1*10) .... = 53. This is not the minimum, though, so we need to test other orders of consumption. In this case, our minimum miles is calculated as, (2^0*10) + (2^1*7) .... = 44.

Given the individual calorie counts for each of the cupcakes, determine the minimum number of miles Marc must walk to maintain his weight. Note that he can eat the cupcakes in any order.

Function Description

Complete the marcsCakewalk function in the editor below. It should return a long integer that represents the minimum miles necessary.

marcsCakewalk has the following parameter(s):

    calorie: an integer array that represents calorie count for each cupcake

Input Format

The first line contains an integer n, the number of cupcakes in calorie.
The second line contains n space-separated integers calorie[i].

Constraints

1<=n<=40
1<=c[i]<=1000

Output Format

Print a long integer denoting the minimum number of miles Marc must walk to maintain his weight.

Sample Input 0

3
1 3 2

Sample Output 0

11



Solution:


#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

long long int marcsCakewalk(vector<int> &v, int n){
    int j = n-1;
    long long int b =0;
    sort(v.begin(),v.end());
    for(int i =0; i<n;i++){
        b += (pow(2,j))*v.at(i);
        j--;
    }
    return b;
}

int main(){
    int n,a;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    long long int result = marcsCakewalk(v,n);
    cout<<result;
    return 0;
}
