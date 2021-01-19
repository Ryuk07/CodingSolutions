Task: This winter is so cold in Nvodsk! A group of n friends decided to buy k bottles of a soft drink called "Take-It-Light" to warm up a bit. Each bottle has l milliliters of the drink. Also they bought c limes and cut each of them into d slices. After that they found p grams of salt.

To make a toast, each friend needs nl milliliters of the drink, a slice of lime and np grams of salt. The friends want to make as many toasts as they can, provided they all drink the same amount. How many toasts can each friend make?
Input

The first and only line contains positive integers n, k, l, c, d, p, nl, np, not exceeding 1000 and no less than 1. The numbers are separated by exactly one space.
Output

Print a single integer — the number of toasts each friend can make.
Examples
Input
Copy

3 4 5 10 8 100 3 1

Output
Copy

2

Input
Copy

5 100 10 1 19 90 4 3

Output
Copy

3

Input
Copy

10 1000 1000 25 23 1 50 1

Output
Copy

0

Note

A comment to the first sample:

Overall the friends have 4 * 5 = 20 milliliters of the drink, it is enough to make 20 / 3 = 6 toasts. The limes are enough for 10 * 8 = 80 toasts and the salt is enough for 100 / 1 = 100 toasts. However, there are 3 friends in the group, so the answer is min(6, 80, 100) / 3 = 2.



Solution:


#include <bits/stdc++.h>
using namespace std;	


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
    
	int n,k,l,c,d,p,nl,np,a,b,r;
	cin>>n>>k>>l>>c>>d>>p>>nl>>np;
	a = (k*l)/nl;
	b = c*d;
	r = p/np;
	vector<int> v;
	v.push_back(a);
	v.push_back(b);
	v.push_back(r);
	int min = *min_element(v.begin(),v.end());
	min = min/n;
	cout<<min<<endl;
    return 0;
}

