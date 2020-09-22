Task:  You will be given an array of integers. All of the integers except one occur twice. That one is unique in the array.

Given an array of integers, find and print the unique element.

For example, a=[1,2,3,4,3,2,1], the unique element is 4.

Function Description

Complete the lonelyinteger function in the editor below. It should return the integer which occurs only once in the input array.

lonelyinteger has the following parameter(s):

    a: an array of integers

Input Format

The first line contains a single integer, n, denoting the number of integers in the array.
The second line contains n space-separated integers describing the values in a.

Constraints

1<=n<100
It is guaranteed that n is an odd number and that there is one unique element.
0<=a[i]<=100, where 0<=i<n.

Output Format

Print the unique integer in the array.

Sample Input 0

1
1

Sample Output 0

1

Explanation 0

There is only one element in the array, thus it is unique.

Sample Input 1

3
1 1 2

Sample Output 1

2

Explanation 1

We have two 1's, and 2 is unique.

Sample Input 2

5
0 0 1 2 1

Sample Output 2

2



Solution:


#include <iostream>
#include <vector>
using namespace std;


int SingleNumber(vector<int> &ar,int n){
    vector<int> f(32,0);
    for(int e: ar){
        for(int i=0;i<32;i++){
            if(e & (1<<i)){
                f.at(i)++;
            }
        }
    }
    int res =0;
    for(int i=0;i<32;i++){
        if(f.at(i)%2!=0){
            res+=(1<<i);
        }
    }
    return res;
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
    int result = SingleNumber(v,n);
    cout<<result;
    return 0;
}


