Task:  Given a square matrix, calculate the absolute difference between the sums of its diagonals.

For example, the square matrix arr is shown below:

1 2 3
4 5 6
9 8 9  

The left-to-right diagonal = 1+5+9=15. The right to left diagonal = 3+5+9=17 . Their absolute difference is
|15-17|=2.

Function description

Complete the diagonalDifference function in the editor below.

diagonalDifference takes the following parameter:

    int arr[n][m]: an array of integers

Return

    int: the absolute diagonal difference

Input Format

The first line contains a single integer, n, the number of rows and columns in the square matrix arr.
Each of the next n lines describes a row, arr[i], and consists of n space-separated integers arr[i][j].

Solution:


#include <iostream>
#include <cstdlib>
using namespace std;

int main(){
    int n;
    cin>>n;
    int arr[n][n];
    for(int i=0; i<n;i++){
        for(int j=0; j<n; j++){
            cin>>arr[i][j];
        }
    }
    int left = 0 , right =0 , diff;
    for(int i=0; i<n;i++){
        for(int j=0; j<n;j++){
            if(i==j){
                left+=arr[i][j];
                //cout<<left<<endl;
            }
            if((i+j) == (n -1)){
                right+=arr[i][j];
                //cout<<right<<endl;
            }
            else{
                continue;
            }
        }
    }
    diff = abs(right-left);
    cout<<diff;
    return 0;
}