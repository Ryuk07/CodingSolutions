Task: This is an interactive problem.

Chef has a secret integer. The only information you have is that it has an odd number of factors and that it lies between 1
and 106

inclusive.

You have been challenged by Chef to find his number. You may make up to 2,000

guesses (queries). Whenever you guess Chef's number, he only tells you if you guessed correctly or not. Can you find Chef's number?
Interaction

    First, you should read a line containing a single integer T

― the number of test cases. The description of interaction for T
test cases follows.
For each test case, you should start by asking queries.

    To ask a query, you should print a line containing an integer between 1

and 106
inclusive ― your guess.
Then, you should read a line containing a single integer: 1
if you correctly guessed Chef's secret number, 0 if your guess was incorrect or −1 if your guess is invalid (in particular, smaller than 1 or greater than 106) or you have asked more than 2,000

        queries.
    As soon as you have correctly guessed Chef's secret number, you should stop asking queries and continue solving the remaining test cases.

If you read −1

, you must immediately terminate your program to receive a Wrong Answer verdict. Otherwise, you may receive any verdict. Don't forget to flush the output after printing each line! You can read more about interactive problems here.
Constraints

    1≤T≤100

Chef's secret number lies between 1
and 106

    inclusive
    Chef's secret number has an odd number of factors

Interaction

Grader          You
1
                232
0
                92739
0
                100
1

Explanation

Example case 1:

    You ask Chef if 232

is his secret number. Chef replies with 0
, so it is not.
You ask Chef if 92,739
is his secret number. Chef replies with 0
, so it is not.
You ask Chef if 100
is his secret number. Chef replies with 1, so this is indeed his secret number.



Solution:


#include <bits/stdc++.h>
using namespace std;	


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	int t;
	cin>>t;
	while(t--){
   for (int i = 1; i <= 1000; i++) {
		printf("%d\n", i * i);
		fflush(stdout);

		int res;
		cin >> res;

		if (res)
			break;
    } 
    }  	
    return 0;

}

