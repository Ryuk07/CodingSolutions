Task: Given a string S that only contains "I" (increase) or "D" (decrease), let N = S.length.

Return any permutation A of [0, 1, ..., N] such that for all i = 0, ..., N-1:

    If S[i] == "I", then A[i] < A[i+1]
    If S[i] == "D", then A[i] > A[i+1]

 

Example 1:

Input: "IDID"
Output: [0,4,1,3,2]

Example 2:

Input: "III"
Output: [0,1,2,3]

Example 3:

Input: "DDI"
Output: [3,2,0,1]

 

Note:

    1 <= S.length <= 10000
    S only contains characters "I" or "D".



Solution:


class Solution {
public:
    vector<int> diStringMatch(string S) {
        int left =0,right =S.size();
        vector<int> ret(S.size()+1);
        for(int i=0;i<S.size();++i){
            if(S[i]=='I'){
                ret[i] = left;
                ++left;
                if(i+1 == S.size() )
                    ret[i+1] = left;
            }
            else{
                ret[i] = right;
                --right;
                if(i+1 == S.size() )
                    ret[i+1] = right;
            }
        }
        return ret;
    }
};