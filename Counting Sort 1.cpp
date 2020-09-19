Task:  Given a list of integers, count and output the number of times each value appears as a list of space-separated integers.

Function Description

Complete the countingSort function in the editor below. It should return an array of integers where each value is the number of occurrences of the element's index value in the original array.

countingSort has the following parameter(s):

    arr: an array of integers

Input Format

The first line contains an integer n, the number of items in arr.
Each of the next n lines contains an integer arr[i] where 0<=i<=n.

Constraints

100<=n<=10^6
0<=arr[i]<=100

Output Format

Output the number of times every number from 0 through 99 appears in arr as a list of space-separated integers on one line.

Sample Input

100
63 25 73 1 98 73 56 84 86 57 16 83 8 25 81 56 9 53 98 67 99 12 83 89 80 91 39 86 76 85 74 39 25 90 59 10 94 32 44 3 89 30 27 79 46 96 27 32 18 21 92 69 81 40 40 34 68 78 24 87 42 69 23 41 78 22 6 90 99 89 50 30 20 1 43 3 70 95 33 46 44 9 69 48 33 60 65 16 82 67 61 32 21 79 75 75 13 87 70 33  

Sample Output

0 2 0 2 0 0 1 0 1 2 1 0 1 1 0 0 2 0 1 0 1 2 1 1 1 3 0 2 0 0 2 0 3 3 1 0 0 0 0 2 2 1 1 1 2 0 2 0 1 


Solution:


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int CountSort(vector<int> &v,int n){
    int k = *max_element(v.begin(),v.end());
    vector<int> count(k+1);
    for(int i=0;i<n;i++){
        count.at(v.at(i))++;
    }
    for(int i=0;i<=k;i++){
        cout<<count.at(i)<<" ";
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int result = CountSort(v,n);
    return 0;
}
