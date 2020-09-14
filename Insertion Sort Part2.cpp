Task:  In Insertion Sort Part 1, you inserted one element into an array at its correct sorted position. Using the same approach repeatedly, can you sort an entire array?

Guideline: You already can place an element into a sorted array. How can you use that code to build up a sorted array, one element at a time? Note that in the first step, when you consider an array with just the first element, it is already sorted since there's nothing to compare it to.

In this challenge, print the array after each iteration of the insertion sort, i.e., whenever the next element has been inserted at its correct position. Since the array composed of just the first element is already sorted, begin printing after placing the second element.

For example, there are n=7 elements in arr = [3,4,7,5,6,2,1]. Working from left to right, we get the following output:

3 4 7 5 6 2 1
3 4 7 5 6 2 1
3 4 5 7 6 2 1
3 4 5 6 7 2 1
2 3 4 5 6 7 1
1 2 3 4 5 6 7

Function Description

Complete the insertionSort2 function in the editor below. At each iteration, it should print the array as space-separated integers on a separate line.

insertionSort2 has the following parameter(s):

    n: an integer representing the length of the array arr.

    arr: an array of integers

Input Format

The first line contains an integer, n, the size of arr.
The next line contains n space-separated integers arr[i].

Output Format

On each line, output the entire array at every iteration.

Sample Input

6
1 4 3 5 6 2

Sample Output

1 4 3 5 6 2 
1 3 4 5 6 2 
1 3 4 5 6 2 
1 3 4 5 6 2 
1 2 3 4 5 6 



Solution:


#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int InsertionSort(vector<int> &v, int n){
    for(int i=1;i<n;i++){
        int value = v.at(i);
        int hole = i;
        while(hole>0 && v.at(hole-1)>value){
            v.at(hole) = v.at(hole-1);
            hole = hole -1;
        }
        v.at(hole) = value;
        for(int j =0 ; j<n; j++){
            cout<<v.at(j)<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}

int main(){
    int n;
    cin>>n;
    vector<int> v;
    for(int j =0 ; j<n; j++){
        int a;
        cin>>a;
        v.push_back(a);
    }
    int result = InsertionSort(v,n);
    return 0;
} 