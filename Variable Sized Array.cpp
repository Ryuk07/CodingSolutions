Task: Consider an n-element array, a, where each index i in the array contains a reference to an array of ki integers (where the value of ki varies from array to array). See the Explanation section below for a diagram.

Given a, you must answer q queries. Each query is in the format i j, where i denotes an index in array a and j denotes an index in the array located at a[i]. For each query, find and print the value of element j in the array at location a[i] on a new line.

Click here to know more about how to create variable sized arrays in C++.

Input Format

The first line contains two space-separated integers denoting the respective values of n (the number of variable-length arrays) and q (the number of queries).
Each line i of the n subsequent lines contains a space-separated sequence in the format k a[i]0 a[i]1 … a[i]k-1 describing the k-element array located at a[i].
Each of the q subsequent lines contains two space-separated integers describing the respective values of i (an index in array a) and j (an index in the array referenced by a[i]) for a query.

Output Format

For each pair of i and j values (i.e., for each query), print a single integer that denotes the element located at index j of the array referenced by a[i]. There should be a total of q lines of output.

Sample Input

2 2
3 1 5 4
5 1 2 8 9 3
0 1
1 3

Sample Output

5
9


Solution:


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
      int n, q, size, value, which, index;
    cin >> n >> q;
    vector<vector<int>> nvec;
    for (int i = 0; i < n; ++i) {
        cin >> size;
        vector<int> ivec;
        for (int j = 0; j < size; ++j) {
            cin >> value;
            ivec.push_back(value);
        }
        nvec.push_back(ivec);
    }
    for (int k = 0; k < q; ++k) {
        cin >> which >> index;
        cout << nvec[which][index] << endl;
    }
    return 0;
}
