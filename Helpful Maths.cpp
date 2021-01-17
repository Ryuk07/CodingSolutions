Task: Xenia the beginner mathematician is a third year student at elementary school. She is now learning the addition operation.

The teacher has written down the sum of multiple numbers. Pupils should calculate the sum. To make the calculation easier, the sum only contains numbers 1, 2 and 3. Still, that isn't enough for Xenia. She is only beginning to count, so she can calculate a sum only if the summands follow in non-decreasing order. For example, she can't calculate sum 1+3+2+1 but she can calculate sums 1+1+2 and 3+3.

You've got the sum that was written on the board. Rearrange the summans and print the sum in such a way that Xenia can calculate the sum.
Input

The first line contains a non-empty string s — the sum Xenia needs to count. String s contains no spaces. It only contains digits and characters "+". Besides, string s is a correct sum of numbers 1, 2 and 3. String s is at most 100 characters long.
Output

Print the new sum that Xenia can count.
Examples
Input
Copy

3+2+1

Output
Copy

1+2+3

Input
Copy

1+1+3+1+3

Output
Copy

1+1+1+3+3

Input
Copy

2

Output
Copy

2



Solution:


#include <bits/stdc++.h>
using namespace std;	


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
        string res;
    cin>>res;
    int ones = 0, twos = 0, threes = 0, len = res.length();
    for(int i=0; i<len; i++){
        if(res[i] != '+'){
            if(res[i] == '1'){
                ones++;
            } else if(res[i] == '2'){
                twos++;
            } else{
                threes++;
            }
        }
    }
    res = "";
    for(int i=0; i<ones; i++){
        res += ("1+");
    }
    for(int i=0; i<twos; i++){
        res += ("2+");
    }
    for(int i=0; i<threes; i++){
        res += ("3+");
    }
    if(res != ""){
        res.pop_back();
    }
    cout<<res<<endl;
    return 0;
}

