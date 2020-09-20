Task:  The median of a list of numbers is essentially it's middle element after sorting. The same number of elements occur after it as before. Given a list of numbers with an odd number of elements, can you find the median?

For example, the median of arr = [1,2,3,4,5] is 3, the middle element in the sorted array.

Function Description

Complete the findMedian function in the editor below. It must return an integer that represents the median of the array.

findMedian has the following parameter(s):

    arr: an unsorted array of integers

Input Format

The first line contains the integer n, the size of arr.
The second line contains n space-separated integers arr[i].

Constraints

1<=n<=1000001
n is odd
-10000<=arr[i]<=10000

Output Format

Output one integer, the median.

Sample Input 0

7
0 1 2 4 6 5 3

Sample Output 0

3


Solution:


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int findMedian(vector<int> &v){
    sort(v.begin(),v.end());
    int middle = v.size()/2;
    return v.at(middle);
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
    int result = findMedian(v);
    cout<<result;
    return 0;
}

