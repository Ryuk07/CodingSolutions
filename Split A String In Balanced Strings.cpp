Task:  Balanced strings are those who have equal quantity of 'L' and 'R' characters.

Given a balanced string s split it in the maximum amount of balanced strings.

Return the maximum amount of splitted balanced strings.

 

Example 1:

Input: s = "RLRRLLRLRL"
Output: 4
Explanation: s can be split into "RL", "RRLL", "RL", "RL", each substring contains same number of 'L' and 'R'.

Example 2:

Input: s = "RLLLLRRRLR"
Output: 3
Explanation: s can be split into "RL", "LLLRRR", "LR", each substring contains same number of 'L' and 'R'.

Example 3:

Input: s = "LLLLRRRR"
Output: 1
Explanation: s can be split into "LLLLRRRR".

Example 4:

Input: s = "RLRRRLLRLL"
Output: 2
Explanation: s can be split into "RL", "RRRLLRLL", since each substring contains an equal number of 'L' and 'R'

 

Constraints:

    1 <= s.length <= 1000
    s[i] = 'L' or 'R'



Solution(Taken Help form discussion):



class Solution {
public:
    int balancedStringSplit(string s) {
        int count =0;
        
        for(int i=0;i<s.size();++i){
            int count_r = 0;
            int count_l = 0;
            
            if(s[i] == 'L'){
                count_l++;
            }
            
            if(s[i] == 'R'){
                count_r++;
            }
            
            for(int j = i+1;j<s.size();++j){
                
                if(s[j] == 'L'){
                    count_l++;
                }
                
                if(s[j] == 'R'){
                    count_r++;
                }
                
                if(count_l == count_r){
                    count++;
                    i = j+1;
                    // break;
                }
                
                
            }
            
        }
        return count;
    }
        
};