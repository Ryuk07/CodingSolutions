Task: Numeros the Artist had two lists that were permutations of one another. He was very proud. Unfortunately, while transporting them from one exhibition to another, some numbers were lost out of the first list. Can you find the missing numbers?

As an example, the array with some numbers missing, arr = [7,2,5,3,5,3]. The original array of numbers brr=[7,2,5,4,6,3,5,3]. The numbers missing are [4,6].

Notes

    If a number occurs multiple times in the lists, you must ensure that the frequency of that number in both lists is the same. If that is not the case, then it is also a missing number.
    You have to print all the missing numbers in ascending order.
    Print each missing number once, even if it is missing multiple times.
    The difference between maximum and minimum number in the second list is less than or equal to 100.

Function Description

Complete the missingNumbers function in the editor below. It should return a sorted array of missing numbers.

missingNumbers has the following parameter(s):

    arr: the array with missing numbers
    brr: the original array of numbers

Input Format

There will be four lines of input:

n - the size of the first list, arr
The next line contains space-separated integers arr[i]
m - the size of the second list, brr
The next line contains space-separated integers brr[i]

Output Format

Output the missing numbers in ascending order.

Sample Input

10
203 204 205 206 207 208 203 204 205 206
13
203 204 204 205 206 207 205 208 203 206 205 206 204

Sample Output

204 205 206



Solution(Very Important):



#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
using namespace std;

vector<int> &missingnumber(vector<int> &A,vector<int> &B){
    sort(A.begin(),A.end());
    sort(B.begin(),B.end());
    vector<int> *resultptr = new vector<int> (1000010);
    auto it = set_difference(B.begin(),B.end(),A.begin(),A.end(),(*resultptr).begin());
    it = unique((*resultptr).begin(), it);
    resultptr->resize(distance((*resultptr).begin(),it));
    return *resultptr;
}

int main(){
    int n,m,temp;
    vector<int> A,B,result;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>temp;
        A.push_back(temp);
    }
    cin>>m;
    for(int i=0;i<m;i++){
        cin>>temp;
        B.push_back(temp);
    }
    result = missingnumber(A,B);
    for(int i=0;i<result.size();i++){
        cout<<result[i]<<" ";
    }
    return 0;
} 