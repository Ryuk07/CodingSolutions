Task: You will be given a list of 32 bit unsigned integers. Flip all the bits (1->0 and 0->1) and print the result as an unsigned integer.

For example, your decimal input n=9 = 1001. We're working with 32 bits, so:

00000000000000000000000000001001 = 9
11111111111111111111111111110110 = 4294967286

Function Description

Complete the flippingBits function in the editor below. It should return the unsigned decimal integer result.

flippingBits has the following parameter(s):

    n: an integer

Input Format

The first line of the input contains q, the number of queries.
Each of the next q lines contain an integer, n, to process.

Constraints

1<=q<=100
0<=n<2^32

Output Format

Output one line per element from the list with the decimal value of the resulting unsigned integer.

Sample Input 0

3
2147483647
1
0

Sample Output 0

2147483648
4294967294
4294967295



Solution:


#include <bits/stdc++.h>
using namespace std;

long flippingBits(long &n)
{
    return (uint) ~n;
}

int main(){
    int q;
    cin>>q;
    while(q--)
    {
        long n;
        cin>>n;
        long result = flippingBits(n);
        cout<<result<<endl;
    }
    return 0;
}
