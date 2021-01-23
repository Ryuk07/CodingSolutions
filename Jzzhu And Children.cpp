Task: There are n children in Jzzhu's school. Jzzhu is going to give some candies to them. Let's number all the children from 1 to n. The i-th child wants to get at least ai candies.

Jzzhu asks children to line up. Initially, the i-th child stands at the i-th place of the line. Then Jzzhu start distribution of the candies. He follows the algorithm:

    Give m candies to the first child of the line.
    If this child still haven't got enough candies, then the child goes to the end of the line, else the child go home.
    Repeat the first two steps while the line is not empty. 

Consider all the children in the order they go home. Jzzhu wants to know, which child will be the last in this order?
Input

The first line contains two integers n, m (1 ≤ n ≤ 100; 1 ≤ m ≤ 100). The second line contains n integers a1, a2, ..., an (1 ≤ ai ≤ 100).
Output

Output a single integer, representing the number of the last child.
Examples
Input
Copy

5 2
1 3 1 4 2

Output
Copy

4

Input
Copy

6 4
1 1 2 2 3 3

Output
Copy

6

Note

Let's consider the first sample.

Firstly child 1 gets 2 candies and go home. Then child 2 gets 2 candies and go to the end of the line. Currently the line looks like [3, 4, 5, 2] (indices of the children in order of the line). Then child 3 gets 2 candies and go home, and then child 4 gets 2 candies and goes to the end of the line. Currently the line looks like [5, 2, 4]. Then child 5 gets 2 candies and goes home. Then child 2 gets two candies and goes home, and finally child 4 gets 2 candies and goes home.

Child 4 is the last one who goes home.



Solution:


#include <bits/stdc++.h>
using namespace std;	


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
    
    int n, m;
    vector<int> v1;
    vector<int> v2;
    cin >> n >> m;
    int sum = 0;
    for(int i=0; i<n; i++){
        int temp;
        cin >> temp;
        v2.push_back(i+1);
        v1.push_back(temp);
    }
    int last;
    int counter = n;
    while(n > 0){
        for(int i=0; i < v1.size(); i++){
            v1[i] = v1[i] - m;
            n--;
            if(v1[i] > 0){
                v2.push_back(v2[i]);
                n++;
                v1.push_back(v1[i]);            
            }
        }
    }
    int ans;
    ans = v2.back();
    cout << ans << endl;
    return 0;
}

