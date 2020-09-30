Task: Consider an array of integers, arr = [arr[0],arr[1],.....,arr[n-1]]. We define the absolute difference between two elements, a[i] and a[j] (where i!=j), to be the absolute value of a[i]-a[j].

Given an array of integers, find and print the minimum absolute difference between any two elements in the array. For example, given the array arr = [-2,2,4] we can create 3 pairs of numbers: [-2,2], [-2,4] and [2,4]. The absolute differences for these pairs are |(-2)-2|=4,|(-2)-4|=6 and |2-4|=2. The minimum absolute difference is 2.

Function Description

Complete the minimumAbsoluteDifference function in the editor below. It should return an integer that represents the minimum absolute difference between any pair of elements.

minimumAbsoluteDifference has the following parameter(s):

    n: an integer that represents the length of arr
    arr: an array of integers

Input Format

The first line contains a single integer n, the size of arr.
The second line contains n space-separated integers arr[i].

Constraints

2<=n<=10^5
-10^9<=arr[i]<=10^9

Output Format

Print the minimum absolute difference between any two elements in the array.

Sample Input 0

3
3 -7 0

Sample Output 0

3



Solution:



#include <iostream>
#include <vector>
#include <algorithm>
#include <numeric>
using namespace std;

int main(){
    int n,a,s;
    cin>>n;
    vector<int> v;
    for(int i =0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    int min_diff = abs(v[1]-v[0]);
    sort(v.begin(),v.end());

    for(int i=0; i<n-1; i++) 
    {
        int diff = abs(v[i+1]-v[i]);
        if (diff < min_diff) 
        {
            min_diff = diff;
        }
    }
    cout<<min_diff;
    return 0;
}
