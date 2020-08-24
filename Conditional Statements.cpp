Input Format

A single integer denoting n.

Output Format

If 1<=n<=9, then print the lowercase English word corresponding to the number (e.g., one for , two for , etc.); otherwise, print Greater than 9 instead.

Solution :


#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string a[10] = {"Greater than 9","one","two","three","four","five","six","seven","eight","nine"};
    if(n >= 1 and n <= 9){
        cout<<a[n];
    }
    else {
        cout<<a[0];
    }


    return 0;
}
