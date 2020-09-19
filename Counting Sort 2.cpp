Task:  Given an unsorted list of integers, use the counting sort method to sort the list and then print the sorted list.

Hint: You can use your previous code that counted the items to print out the actual values in order.

Function Description

Complete the countingSort function in the editor below. It should return the original array, sorted ascending, as an array of integers.

countingSort has the following parameter(s):

    arr: an array of integers

Input Format

The first line contains an integer n, the length of arr. The next line contains space-separated integers arr[i] where 0<=i<=n.

Constraints

0<=n<=1000000
0<=arr[i]<100

Output Format

Print the sorted list as a single line of space-separated integers.

Sample Input

100
63 25 73 1 98 73 56 84 86 57 16 83 8 25 81 56 9 53 98 67 99 12 83 89 80 91 39 86 76 85 74 39 25 90 59 10 94 32 44 3 89 30 27 79 46 96 27 32 18 21 92 69 81 40 40 34 68 78 24 87 42 69 23 41 78 22 6 90 99 89 50 30 20 1 43 3 70 95 33 46 44 9 69 48 33 60 65 16 82 67 61 32 21 79 75 75 13 87 70 33 

Sample Output

1 1 3 3 6 8 9 9 10 12 13 16 16 18 20 21 21 22 23 24 25 25 25 27 27 30 30 32 32 32 33 33 33 34 39 39 40 40 41 42 43 44 44 46 46 48 50 53 56 56 57 59 60 61 63 65 67 67 68 69 69 69 70 70 73 73 74 75 75 76 78 78 79 79 80 81 81 82 83 83 84 85 86 86 87 87 89 89 89 90 90 91 92 94 95 96 98 98 99 99


Solution:


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;


int CountSort(vector<int> &v,int n){
    int k = *max_element(v.begin(),v.end());
    vector<int> count(k+1);
    vector<int> b(n);
    for(int i=0;i<n;i++){
        count.at(v.at(i))++;
    }
    for(int i=1;i<=k;i++){
        count.at(i) = count.at(i) + count.at(i-1);
    }
    for(int i=n-1;i>=0;i--){
        b.at(--count.at(v.at(i)))=v.at(i);
    }
    for(int i=0;i<n;i++){
        v.at(i) = b.at(i);
    }
    for(int i=0;i<n;i++){
        cout<<v.at(i)<<" ";
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
 