Task: Given the array nums, obtain a subsequence of the array whose sum of elements is strictly greater than the sum of the non included elements in such subsequence. 

If there are multiple solutions, return the subsequence with minimum size and if there still exist multiple solutions, return the subsequence with the maximum total sum of all its elements. A subsequence of an array can be obtained by erasing some (possibly zero) elements from the array. 

Note that the solution with the given constraints is guaranteed to be unique. Also return the answer sorted in non-increasing order.

 

Example 1:

Input: nums = [4,3,10,9,8]
Output: [10,9] 
Explanation: The subsequences [10,9] and [10,8] are minimal such that the sum of their elements is strictly greater than the sum of elements not included, however, the subsequence [10,9] has the maximum total sum of its elements. 

Example 2:

Input: nums = [4,4,7,6,7]
Output: [7,7,6] 
Explanation: The subsequence [7,7] has the sum of its elements equal to 14 which is not strictly greater than the sum of elements not included (14 = 4 + 4 + 6). Therefore, the subsequence [7,6,7] is the minimal satisfying the conditions. Note the subsequence has to returned in non-decreasing order.  

Example 3:

Input: nums = [6]
Output: [6]

 

Constraints:

    1 <= nums.length <= 500
    1 <= nums[i] <= 100


Solution:

class Solution {
public:
    vector<int> minSubsequence(vector<int>& nums) {
        if(nums.size()==1){
            return nums;
        }
        else
        {
        sort(nums.begin(),nums.end(),greater<int>());
        int sum1=0,sum2,flag=0;
        vector<int> d;
        for(int i=0;i<nums.size();i++){
            sum2=0;
            sum1 += nums.at(i);
            d.push_back(nums.at(i));
            for(int j=i+1;j<nums.size();j++){
                sum2+=nums.at(j);
            }
            if(sum1>sum2){
                flag=1;
                break;
            }
        }
        if(flag!=0){
            for(int k=0;k<d.size();k++){
                cout<<d.at(k)<<" ";
            }
        }
        return d;
    }
    }
};