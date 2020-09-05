Task : keeps irritating Shreya by calling her Chhotu. As she is already irritated being inside home since one month due to COVID-19 lockdown, one day he decided that he will stop calling her Chhotu if she would be able to find the number which is present odd number of times in a given array of numbers of size (2*n+1). It is guaranteed that only one such number exists.

Can you help Shreya in finding the number which is present odd number of times?

Input Format

First line contains value of n.
Second line contains (2*n+1) array elements.

Constraints

1≤ n ≤ 105
1≤ a[i] ≤ 109

Output Format

Print the required number.

Sample Input 0

2
1 2 3 2 1

Sample Output 0

3

Sample Input 1

3
1 2 2 1 3 6 3

Sample Output 1

6


Solution:

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n ,a;
    cin>>n;
    vector<int> v;
    for(int i=0;i<(2*n+1);i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int x : v){
        int count = 0;
        vector<int>::iterator it = lower_bound(v.begin(), v.end() , x);
        vector<int>::iterator it2 = upper_bound(v.begin(), v.end() , x);
        count = it2 - it;
        if(count%2!=0){
            cout<<x;
            break;
        }
    }
    return 0;
}

