Task: A permutation is a sequence of integers p1, p2, ..., pn, consisting of n distinct positive integers, each of them doesn't exceed n. Let's denote the i-th element of permutation p as pi. We'll call number n the size of permutation p1, p2, ..., pn.

Nickolas adores permutations. He likes some permutations more than the others. He calls such permutations perfect. A perfect permutation is such permutation p that for any i (1 ≤ i ≤ n) (n is the permutation size) the following equations hold ppi = i and pi ≠ i. Nickolas asks you to print any perfect permutation of size n for the given n.
Input

A single line contains a single integer n (1 ≤ n ≤ 100) — the permutation size.
Output

If a perfect permutation of size n doesn't exist, print a single integer -1. Otherwise print n distinct integers from 1 to n, p1, p2, ..., pn — permutation p, that is perfect. Separate printed numbers by whitespaces.
Examples
Input
Copy

1

Output
Copy

-1

Input
Copy

2

Output
Copy

2 1 

Input
Copy

4

Output
Copy

2 1 4 3


Solution1:


#include <bits/stdc++.h>
using namespace std;	


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
    int n;
    cin>>n;
    if(n%2!=0){
    	cout<<-1<<endl;
    }
    else{
    	vector<int> v;
    	for(int i=0;i<n;i++){
    		v.push_back(i+1);
    	}
    	for(int i=0;i<n-1;i+=2){
    		swap(v[i],v[i+1]);
    	}
    	for(int i=0;i<n;i++){
    		cout<<v[i]<<" ";
    	}
    	cout<<endl;
    }
	return 0;
}




solution 2:


        #include<bits/stdc++.h>
        using namespace std;
         
        int main(){
            int i=0, n=0;
            string a;
            cin>>n;
         
            if(n%2==1) cout<<-1<<endl;
         
            else{
                for(int i=1; i<=n;i++){
                    if(i%2!=0) cout<<i+1<<" ";
                    else cout<<i-1<<" ";
                }
            }
         
            return 0;
        }