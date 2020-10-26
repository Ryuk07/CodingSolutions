Task: Given an array of integers A sorted in non-decreasing order, return an array of the squares of each number, also in sorted non-decreasing order.

 

Example 1:

Input: [-4,-1,0,3,10]
Output: [0,1,9,16,100]

Example 2:

Input: [-7,-3,2,3,11]
Output: [4,9,9,49,121]

 

Note:

    1 <= A.length <= 10000
    -10000 <= A[i] <= 10000
    A is sorted in non-decreasing order.



Solution(Two pointer approach):


class Solution {
public:
    vector<int> sortedSquares(vector<int>& A) {
        int n = A.size(), l=0, r=n-1, i=0;
        vector<int> ans(n);
        while (l <= r) {
            if (abs(A[l]) <= abs(A[r])) {
                ans[n-i-1] = A[r]*A[r]; 
                r--;
            }
            else {
                ans[n-i-1] = A[l]*A[l];
                l++;
            }
            i++;
        }
        return ans;
    }
};