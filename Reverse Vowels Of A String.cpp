Task: Write a function that takes a string as input and reverse only the vowels of a string.

Example 1:

Input: "hello"
Output: "holle"

Example 2:

Input: "leetcode"
Output: "leotcede"

Note:
The vowels does not include the letter "y".

 


Solution:


class Solution {
public:
    bool isVowel(char e){
        return e == 'a' || e == 'e' || e == 'i' || e == 'o' || e == 'u'
            || e == 'A' || e == 'E' || e == 'I' || e == 'O' || e == 'U';
    }
    
    string reverseVowels(string s) {
        int i = 0;
        int j = s.size()-1;
        while(i<j){
            if(isVowel(s[i])){
                if(isVowel(s[j])){
                    swap(s[i], s[j]);
                    i++;
                    j--;
                }else{
                    j--;
                }
            }else{
                i++;
            }
        }
        
        return s;
    }
};
        