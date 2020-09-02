Task:  You are provided with a vector of N integers. Then, you are given 2 queries. For the first query, you are provided with 1 integer, which denotes a position in the vector. The value at this position in the vector needs to be erased. The next query consists of 2 integers denoting a range of the positions in the vector. The elements which fall under that range should be removed. The second query is performed on the updated vector which we get after performing the first query.

The following are some useful vector functions:

    erase(int position):

    Removes the element present at position.  
    Ex: v.erase(v.begin()+4); (erases the fifth element of the vector v)

    erase(int start,int end):

    Removes the elements in the range from start to end inclusive of the start and exclusive of the end.
    Ex:v.erase(v.begin()+2,v.begin()+5);(erases all the elements from the third element to the fifth element.)

Input Format

The first line of the input contains an integer N.The next line contains N space separated integers(1-based index).The third line contains a single integer x,denoting the position of an element that should be removed from the vector.The fourth line contains two integers a and b denoting the range that should be erased from the vector inclusive of a and exclusive of b.  


Solutions:


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n,c,a,b,x;
    cin>>n;
    vector<int> v;
    for(int i =0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    cin>>x;
    cin>>a>>b;

    v.erase(v.begin()+(x-1));
    v.erase(v.begin()+(a-1),v.begin()+(b-1));
    cout<<v.size()<<endl;
    for(auto x: v){
        cout<<x<<" ";
    }

    return 0;
}
