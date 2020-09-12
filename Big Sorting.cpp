Task:  Consider an array of numeric strings where each string is a positive number with anywhere from 1 to pow(10,6) digits. Sort the array's elements in non-decreasing, or ascending order of their integer values and print each element of the sorted array on a new line.

Function Description:

Complete the bigSorting function in the editor below. It should return the sorted string array.

bigSorting has the following parameter(s):

    unsorted: an unsorted array of integers as strings

Input Format:

The first line contains an integer, n, denoting the number of strings in unsorted.
Each of the n subsequent lines contains an integer string unsorted[i].

Constraints:

1<=n<=2*pow(10,5)
Each string is guaranteed to represent a positive integer without leading zeros.
The total number of digits across all strings in unsorted is between 1 and pow(10,6)(inclusive).

Output Format

Print each element of the sorted array on a new line.

Sample Input 0

6
31415926535897932384626433832795
1
3
10
3
5

Sample Output 0

1
3
3
5
10
31415926535897932384626433832795


Solution:


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool myfunction (string i,string j) 
{ 
    int n=i.length();
    int m=j.length();
    if(n==m)
        return (i<j);
    
    return n<m;   
}


int main() {
    int n;
    cin>>n;
    vector <string> arr(n);
    for(int i=0;i<n;i++)
        cin>>arr[i];
    
    
    sort(arr.begin(),arr.end(),myfunction);
    
    for(int i=0;i<n;i++)
        cout<<arr[i]<<endl;
    
    return 0;
}

