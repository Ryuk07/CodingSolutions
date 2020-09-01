Task: You are in charge of the cake for your niece's birthday and have decided the cake will have one candle for each year of her total age. When she blows out the candles, she’ll only be able to blow out the tallest ones. Your task is to find out how many candles she can successfully blow out.

For example, if your niece is turning 4 years old, and the cake will have 4 candles of height 4, 4, 1, 3, she will be able to blow out 2 candles successfully, since the tallest candles are of height 4 and there are 2 such candles.

Function Description:

Complete the function birthdayCakeCandles in the editor below. It must return an integer representing the number of candles she can blow out.

birthdayCakeCandles has the following parameter(s):

    ar: an array of integers representing candle heights

Input Format

The first line contains a single integer, n, denoting the number of candles on the cake.
The second line contains n space-separated integers, where each integer i describes the height of candle i.

Solution:


#include <iostream>
#include <algorithm>
using namespace std;

int birthdayCakeCandles(long array[], long size){
    int count=0;
    sort(array , array+size);
    for(int i=0;i<size;i++){
        if(array[size-1]==array[i]){
            count+=1;
        }
    }
    cout<<count;
    return 0;
}

int main(){
    long n ;
    int result;
    cin>>n;
    long arr[n];
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    result = birthdayCakeCandles(arr,n);
    return 0;
}