Task: Given an array of integers, calculate the ratios of its elements that are positive, negative, and zero. Print the decimal value of each fraction on a new line with 6 places after the decimal.

Note: This challenge introduces precision problems. The test cases are scaled to six decimal places, though answers with absolute error of up to pow(10,-4) are acceptable.

Example:
arr = [-1,1,0,-1,-1]
There are elements, n=5 two positive, two negative and one zero. Their ratios are , and

. Results are printed as:

0.400000
0.400000
0.200000

Function Description

Complete the plusMinus function in the editor below.

plusMinus has the following parameter(s):

    int arr[n]: an array of integers

Print
Print the ratios of positive, negative and zero values in the array. Each value should be printed on a separate line with

digits after the decimal. The function should not return a value.

Input Format

The first line contains an integer,
, the size of the array.
The second line contains space-separated integers that describe .

Solution:


#include <iostream>
#include <iomanip>
using namespace std;

int plusMinus(int array[], int size){
    double pos=0 , neg=0 , zero=0;
    for(int i=0; i<size;i++){
        if(array[i]>0){
            pos+=1;
        }
        else if(array[i]<0){
            neg+=1;
        }
        else {
            zero +=1;
        }
    }
    double a,b,c;
    a = pos/size;
    b = neg/size;
    c = zero/size;
    cout<< fixed << setprecision(6) << a<<endl;
    cout<< fixed << setprecision(6) << b<<endl;
    cout<< fixed << setprecision(6) << c<<endl;
    return 0;
}

int main(){
    int n, minus;
    cin>>n;
    int arr[n];
    for(int i=0; i<n;i++){
        cin>>arr[i];
    }
    minus = plusMinus(arr,n);
    return 0;
}
