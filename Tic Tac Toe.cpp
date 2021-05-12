Task: Tic-tac-toe is a game played between two players on a 3×3 grid. In a turn, a player chooses an empty cell and places their symbol on the cell. The players take alternating turns, where the player with the first turn uses the symbol X and the other player uses the symbol O. The game continues until there is a row, column, or diagonal containing three of the same symbol (X or O

), and the player with that token is declared the winner. Otherwise if every cell of the grid contains a symbol and nobody won, then the game ends and it is considered a draw.

You are given a tic-tac-toe board A
after a certain number of moves, consisting of symbols O, X, and underscore(_

). Underscore signifies an empty cell.

Print

    1

: if the position is reachable, and the game has drawn or one of the players won.
2
: if the position is reachable, and the game will continue for at least one more move.
3

    : if the position is not reachable.

Note:

    Starting from an empty board, reachable position means that the grid is possible after a finite number of moves in the game where the players may or may not be playing optimally.
    The answer for each testcase should be with respect to the present position and independent of the results in the further successive moves.

Input

    The first line contains an integer T

, the number of test cases. Then the test cases follow.
Each test case contains 3
lines of input where each line contains a string describing the state of the game in ith

    row.

Output

For each test case, output in a single line 1
, 2 or 3

as described in the problem.
Constraints

    1≤T≤39

Aij∈{X,O,_}

Subtasks

Subtask #1 (100 points): Original Constraints
Sample Input

3
XOX
XXO
O_O
XXX
OOO
___
XOX
OX_
XO_

Sample Output

2
3
1

Explanation

Test Case 1

: The board is reachable, and although no player can win from this position, still the game continues.

Test Case 2

: There can't be multiple winners in the game.

Test Case 3
: The first player is clearly a winner with one of the diagonals.




Solution:




#include <bits/stdc++.h>
#define ll long long
using namespace std;	


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
	ll t;
	cin>>t;
	while(t--){
		char arr[3][3];
		int cx=0,co=0,c_=0,a=0,b=0;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				cin>>arr[i][j];
				if(arr[i][j]=='X') cx++;
				else if(arr[i][j]=='O') co++;
				else if(arr[i][j]=='_') c_++;
			}
		}
		for(int i=0;i<3;i++){
			if(arr[i][0]==arr[i][1]&&arr[i][1]==arr[i][2]){
				if(arr[i][0]=='X') {a++;}
				else if(arr[i][0]=='O') {b++;}
			}
		}
		for(int i=0;i<3;i++){
			if(arr[0][i]==arr[1][i]&&arr[1][i]==arr[2][i]){
				if(arr[0][i]=='X') {a++;}
				else if(arr[0][i]=='O') {b++;}
			}
		}
		if(arr[0][0]==arr[1][1]&&arr[1][1]==arr[2][2]){
			if(arr[0][0]=='X') {a++;}
			else if(arr[0][0]=='O') {b++;}
		}
		if(arr[0][2]==arr[1][1]&&arr[1][1]==arr[2][0]){
			if(arr[2][0]=='X') {a++;}
			else if(arr[2][0]=='O') {b++;}
		}
		if(co>cx)cout<<3<<endl;
		else if(cx-co>1)cout<<3<<endl;
		else if((cx>co)&&(a==1&&b==0))cout<<1<<endl;
		else if((cx==co)&&(a==0&&b==1))cout<<1<<endl;
		else if((c_==0)&&(a+b==0))cout<<1<<endl;
		else if((c_==0)&&a==2)cout<<1<<endl;
		else if(c_>0&&(a+b==0))cout<<2<<endl;
		else cout<<3<<endl;
	}
	return 0;
}

