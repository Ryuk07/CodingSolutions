Task :  You are given integers.Sort the integers and print the sorted order.
Store the

integers in a vector.Vectors are sequence containers representing arrays that can change in size.

    Declaration:

    vector<int>v; (creates an empty vector of integers)

    Size:

    int size=v.size();

    Pushing an integer into a vector:

    v.push_back(x);(where x is an integer.The size increases by 1 after this.)

    Popping the last element from the vector:

    v.pop_back(); (After this the size decreases by 1)

    Sorting a vector:

    sort(v.begin(),v.end()); (Will sort all the elements in the vector)

Solution :


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */  
    int n;
    int a;
    cin>>n;
    vector<int> v;
    for(int i =0;i<n;i++){
        cin>>a;
        v.push_back(a);
    }
    sort(v.begin(),v.end());
    for(int i=0; i<n; i++){
    cout << v[i] << " ";
    }
    return 0;
}
