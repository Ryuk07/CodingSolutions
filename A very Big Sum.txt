Task:  In this challenge, you are required to calculate and print the sum of the elements in an array, keeping in mind that some of those integers may be quite large.

Function Description:

Complete the aVeryBigSum function in the editor below. It must return the sum of all array elements.

aVeryBigSum has the following parameter(s):

    int ar[n]: an array of integers .

Return:

    int: the sum of all array elements

Input Format:

The first line of the input consists of an integer
.
The next line contains

space-separated integers contained in the array.

Output Format:

Return the integer sum of the elements in the array.

Constraints:

1<=n<=10
0<=ar[i]<=pow(10,10)

Solution:


#include <iostream>
using namespace std;

long aVeryBigSum(long array[] , size_t size){
    long a=0;
    for(int i=0; i<size; i++){
        a += array[i];
    }
    return a;
}

int main() {
    int n;
    long sum;
    cin>>n;
    long arr[n];
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    sum = aVeryBigSum(arr , n);
    cout<<sum;
    return 0;
}