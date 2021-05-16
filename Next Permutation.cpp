Task: Implement next permutation, which rearranges numbers into the lexicographically next greater permutation of numbers.

If such an arrangement is not possible, it must rearrange it as the lowest possible order (i.e., sorted in ascending order).

The replacement must be in place and use only constant extra memory.

 

Example 1:

Input: nums = [1,2,3]
Output: [1,3,2]

Example 2:

Input: nums = [3,2,1]
Output: [1,2,3]

Example 3:

Input: nums = [1,1,5]
Output: [1,5,1]

Example 4:

Input: nums = [1]
Output: [1]

 

Constraints:

    1 <= nums.length <= 100
    0 <= nums[i] <= 100





Solution:



class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int n = nums.size();
        if(n==1)
            return;
        
        int i=1;
        int lastInc = -1;
        while(i<n) {   
            if(nums[i]>nums[i-1])
                lastInc = i;
            i+=1;
        }
        
        if(lastInc==-1) {  
            for(i=0;i<n/2;++i)
                swap(nums[i],nums[n-i-1]);
            return;
        }
       
        int mn = nums[lastInc];
        int index = lastInc;
        for(i=lastInc;i<n;++i) {
            if(nums[i]>nums[lastInc-1] and nums[i]<nums[index]) {
                index = i;
            }
        }
        swap(nums[lastInc-1],nums[index]);
        sort(nums.begin()+lastInc,nums.end());
    }
};