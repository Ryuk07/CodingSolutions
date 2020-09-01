Task:  Given five positive integers, find the minimum and maximum values that can be calculated by summing exactly four of the five integers. Then print the respective minimum and maximum values as a single line of two space-separated long integers.

Example:
arr = [1,3,5,7,9]
The minimum sum is 1+3+5+7=16 and the maximum sum is 3+5+7+9 = 24. The function prints
16 24

Function Description:

Complete the miniMaxSum function in the editor below.

miniMaxSum has the following parameter(s):

    arr: an array of 5 integers

Print:

Print two space-separated integers on one line: the minimum sum and the maximum sum of
of 4 of 5 elements.

Input Format:

A single line of five space-separated integers.

Solutions:


#include <iostream>
#include <algorithm> 
using namespace std;

int minmaxSum(long array [5]){
    long min, max;
    long sum = 0;
    sort(array , array+5);
    for(int i=0; i<5;i++){
        sum += array[i];
    }
    min = sum - array[4];
    max = sum - array[0];
    cout<<min<<" "<<max;
    return 0;
}

int main(){
    long result;
    long arr[5];
    for(int i=0;i<5;i++){
        cin>>arr[i];
    }
    result = minmaxSum(arr);
    return 0;
}
