Task: Louise and Richard have developed a numbers game. They pick a number and check to see if it is a power of 2. If it is, they divide it by . If not, they reduce it by the next lower number which is a power of 2. Whoever reduces the number to 1 wins the game. Louise always starts.

Given an initial value, determine who wins the game.

As an example, let the initial value n=132. It's Louise's turn so she first determines that 132 is not a power of 2. The next lower power of 2 is 128, so she subtracts that from 132 and passes 4 to Richard. 4 is a power of 2, so Richard divides it by 2 and passes 2 to Louise. Likewise, 2 is a power so she divides it by 2 and reaches 1. She wins the game.

Update If they initially set counter to 1, Richard wins. Louise cannot make a move so she loses.

Function Description

Complete the counterGame function in the editor below. It should return the winner's name, either Richard or Louise.

counterGame has the following parameter(s):

    n: an integer to initialize the game counter

Input Format

The first line contains an integer t, the number of testcases.
Each of the next t lines contains an integer n, the initial value for the game.

Constraints

1<=t<=10
1<=n<=2^64-1

Output Format

For each test case, print the winner's name on a new line in the form Louise or Richard.

Sample Input 0

1
6

Sample Output 0

Richard




Solution(Taken help from google):



#include <iostream>
#include <vector>
#include <algorithm>
using namespace std; 
  
int setBits(unsigned long long int n) {
    int count = 0 ;
    while(n) {
        n &= (n-1) ;
        count ++ ;
    }
    return count ;
}

int main() {
    int t ;
    cin>>t ;
    while(t--) {
        unsigned long long int n ;
        cin>>n;
        if (setBits(n-1) & 1) cout<<"Louise\n";
        else cout<<"Richard\n";
    }
    return 0;
}
