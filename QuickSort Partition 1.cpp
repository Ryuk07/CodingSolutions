Task: Function Description

Complete the quickSort function in the editor below. It should return an array of integers as described above.

quickSort has the following parameter(s):

    arr: an array of integers where arr[0] is the pivot element

Input Format

The first line contains n, the size of the array arr.
The second line contains n space-separated integers describing arr(the unsorted array). The first integer (corresponding to arr[0]) is your pivot element, p.

Constraints

1<=n<=1000
-1000<=arr[i]<=1000 where 0<=i<=n

    All elements will be unique.

Output Format

On a single line, print the partitioned numbers (i.e.: the elements in left, then the elements in equal, and then the elements in right). Each integer should be separated by a single space.

Sample Input

5
4 5 3 7 2

Sample Output

3 2 4 5 7


Solution:


#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int Partition(vector<int> &v,int start , int end){
    int pivot = v.at(start);
    int pIndex = start+1;

    for(int i=start+1;i<end;i++){
        if(v.at(i)<=pivot){
            swap(v.at(i),v.at(pIndex));
            pIndex++;
        }
    }
    swap(v.at(pIndex-1),v.at(start));
    for(int j=0;j<end;j++){
        cout<<v.at(j)<<" ";
    }
    return 0;
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int j=0;j<n;j++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    Partition(v,0,n);
    return 0;
}
