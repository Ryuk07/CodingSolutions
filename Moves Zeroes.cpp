Task: Given an array nums, write a function to move all 0's to the end of it while maintaining the relative order of the non-zero elements.

Example:

Input: [0,1,0,3,12]
Output: [1,3,12,0,0]

Note:

    You must do this in-place without making a copy of the array.
    Minimize the total number of operations.


Solution(Help from Discussion ___ Two pointer approach):


class Solution {
public:
    void moveZeroes(vector<int>& nums) {
    int numZeroes = 0;
    for (int i = 0; i < nums.size(); i++) {
        numZeroes += (nums[i] == 0);
    } 
        int i=0, j=0;
     while (i<nums.size() && j<nums.size()) {
        if (nums[j]!=0)
        {swap (nums[i], nums[j]); i++;}
        j++;
    }
   while (numZeroes) {
        nums[nums.size()-numZeroes]=0;
       numZeroes--;
        }  
    }
};
