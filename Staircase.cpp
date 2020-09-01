Task: Consider a staircase of size n =4:

   #
  ##
 ###
####

Observe that its base and height are both equal to n, and the image is drawn using # symbols and spaces. The last line is not preceded by any spaces.

Write a program that prints a staircase of size n.

Function Description:

Complete the staircase function in the editor below. It should print a staircase as described above.

staircase has the following parameter(s):

    n: an integer

Input Format

A single integer, n, denoting the size of the staircase.

Solution:

#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    for(int i=1;i<=n;i++){
        for(int j=0; j<n-i;j++) cout<< " ";
        for(int k=0;k<i;k++) cout<< "#";
        cout<< endl;
    }
    return 0;
}
