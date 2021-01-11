Task: You are playing a Billiards-like game on an N×N table, which has its four corners at the points {(0,0),(0,N),(N,0), and (N,N)}. You start from a coordinate (x,y), (0<x<N,0<y<N) and shoot the ball at an angle 45∘

with the horizontal. On hitting the sides, the ball continues to move with the same velocity and ensuring that the angle of incidence is equal to the angle of reflection with the normal, i.e, it is reflected with zero frictional loss. On hitting either of the four corners, the ball stops there and doesn’t move any further.

Find the coordinates of the point of collision, when the ball hits the sides for the Kth
time. If the ball stops before hitting the sides K

times, find the coordinates of the corner point where the ball stopped instead.
Input:

    The first line of the input contains an integer T

, the number of testcases.
Each testcase contains a single line of input, which has four space separated integers - N
, K, x, y

    , denoting the size of the board, the number of collisions to report the answer for, and the starting coordinates.

Output:

For each testcase, print the coordinates of the ball when it hits the sides for the Kth

time, or the coordinates of the corner point if it stopped earlier.
Constraints

    1≤T≤105

2≤N≤109
1≤K≤109

Subtasks

    30

points : Sum of K over all test cases ≤107
70

    points : Original constraints.

Sample Input:

2
5 5 4 4
5 2 3 1

Sample Output:

5 5
3 5

Explanation:

    Sample Case 1

    :

We are given a 5
by 5 board. We shoot the ball from coordinates (4,4), and we need to find its coordinates after it has collided with sides 5 times. However, after shooting, the ball goes directly to the corner (5,5), and stops there. So we report the coordinates (5,5)

.

fig1

    Sample Case 2

    :

We are given a 5
by 5 board. We shoot the ball from the coordinates (3,1), and we need to find its coordinates after it has collided with the sides twice. After shooting, it first hits the right side at (5,3), and then the top side at (3,5). So, we report (3,5)

.

fig1



Solution:



#include <bits/stdc++.h>

#define endl "\n"
#define ll long long int
#define vi vector<int>
#define vll vector<ll>
#define vvi vector < vi >
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mod 1000000007
#define inf 1000000000000000001;
#define all(c) c.begin(),c.end()
#define mp(x,y) make_pair(x,y)
#define mem(a,val) memset(a,val,sizeof(a))
#define eb emplace_back

using namespace std;

void solve() {
	ll n, k, x, y;
	cin >> n >> k >> x >> y;

	ll x1, x2, x3, x4, y1, y2, y3, y4;
	int m = k % 4;

	if (x == y)
		cout << n << " " << n;
	else if (x > y) {
		y1 = 0;
		x2 = n;
		y3 = n;
		x4 = 0;
		x1 = x - y;
		y2 = n - x1;
		x3 = x2 + y2 - y3;
		y4 = y3 - x3;

		if (m == 1)
			cout << x2 << " " << y2;
		else if (m == 2)
			cout << x3 << " " << y3;
		else if (m == 3)
			cout << x4 << " " << y4;
		else
			cout << x1 << " " << y1;
	}
	else {
		y1 = 0;
		x2 = n;
		y3 = n;
		x4 = 0;
		y4 = y - x;
		x3 = y3 - y4;
		y2 = x3 + y3 - x2;
		x1 = x2 - y2;

		if (m == 1)
			cout << x3 << " " << y3;
		else if (m == 2)
			cout << x2 << " " << y2;
		else if (m == 3)
			cout << x1 << " " << y1;
		else
			cout << x4 << " " << y4;
	}

	cout << endl;
}

int main() {

#ifndef ONLINE_JUDGE
	freopen("/home/rv/Documents/cp/input.txt", "r", stdin);
	freopen("/home/rv/Documents/cp/output.txt", "w", stdout);
#endif

	ios_base::sync_with_stdio(false);
	cin.tie(NULL);

	ll t = 1;
	cin >> t;
	while (t--) {
		solve();
	}

	return 0;
}