Task:  Given an array of integers, find the sum of its elements.

For example, if the array ar = [1,2,3], 1+2+3 = 6 ,so return 6.

Function Description

Complete the simpleArraySum function in the editor below. It must return the sum of the array elements as an integer.

simpleArraySum has the following parameter(s):

    ar: an array of integers

Input Format

The first line contains an integer, n, denoting the size of the array.
The second line contains n space-separated integers representing the array's elements.

Constraints:
   
	o<n,ar[i]<=1000

Output Format

Print the sum of the array's elements as a single integer. 


Solution:

#include <iostream>
using namespace std;

int SimpleArraySum(int array[] , size_t size){
    int a=0;
    for(int i=0; i<size; i++){
        a += array[i];
    }
    return a;
}

int main() {
    int n,sum;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sum = SimpleArraySum(arr , n);
    cout<<sum;
    return 0;
}