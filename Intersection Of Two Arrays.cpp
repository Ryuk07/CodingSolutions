Task: Given two arrays, write a function to compute their intersection.

Example 1:

Input: nums1 = [1,2,2,1], nums2 = [2,2]
Output: [2]

Example 2:

Input: nums1 = [4,9,5], nums2 = [9,4,9,8,4]
Output: [9,4]

Note:

    Each element in the result must be unique.
    The result can be in any order.


Solution(Two pointer approach):



class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int  n=nums1.size(), m =nums2.size();
        int  i =0,j=0;
        sort(nums1.begin(),nums1.end());
        sort(nums2.begin(),nums2.end());
        vector<int> res;
        vector<int> :: iterator p;
        while(i<n&&j<m){
            if(nums1[i]==nums2[j]){
                res.push_back(nums1[i]);
                i++;
                j++;
            }
            else if(nums1[i]<nums2[j]){
                i++;
            }
            else{
                j++;
            }
        }
        p = unique(res.begin(),res.end());
        res.erase(p,res.end());
        return res;
    }
};

