Task: n soldiers stand in a circle. For each soldier his height ai is known. A reconnaissance unit can be made of such two neighbouring soldiers, whose heights difference is minimal, i.e. |ai - aj| is minimal. So each of them will be less noticeable with the other. Output any pair of soldiers that can form a reconnaissance unit.
Input

The first line contains integer n (2 ≤ n ≤ 100) — amount of soldiers. Then follow the heights of the soldiers in their order in the circle — n space-separated integers a1, a2, ..., an (1 ≤ ai ≤ 1000). The soldier heights are given in clockwise or counterclockwise direction.
Output

Output two integers — indexes of neighbouring soldiers, who should form a reconnaissance unit. If there are many optimum solutions, output any of them. Remember, that the soldiers stand in a circle.
Examples
Input
Copy

5
10 12 13 15 10

Output
Copy

5 1

Input
Copy

4
10 20 30 40

Output
Copy

1 2




Solution:


#include <bits/stdc++.h>
using namespace std;	


int main(){

	#ifndef ONLINE_JUDGE
	freopen("input.txt", "r", stdin);
	freopen("output.txt", "w", stdout);
	#endif
	
    
    long long n,ix=0,iy=0,dif=0;
    int a;
    cin>>n;
    vector<int> v;
    for(int i=0;i<n;i++){
    	cin>>a;
    	v.push_back(a);
    }
    int min = abs(v[0]-v[n-1]);
    int res = min;
    for(int i=0;i<n-1;i++){
    	dif=abs(v[i]-v[i+1]);
    	if(dif<min){
    		min=dif;
    		ix=i;
    		iy=i+1;
    	}
    }
    if(res==min){
    	cout<<n<<" "<<1<<endl;
    }
    else{
    	cout<<ix+1<<" "<<iy+1<<endl;
    }
    return 0;
}

