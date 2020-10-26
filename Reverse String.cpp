Task: Write a function that reverses a string. The input string is given as an array of characters char[].

Do not allocate extra space for another array, you must do this by modifying the input array in-place with O(1) extra memory.

You may assume all the characters consist of printable ascii characters.

 

Example 1:

Input: ["h","e","l","l","o"]
Output: ["o","l","l","e","h"]

Example 2:

Input: ["H","a","n","n","a","h"]
Output: ["h","a","n","n","a","H"]



Solution(Two Pointer Approach):

class Solution {
public:
    void reverseString(vector<char>& s) {
        int i=0,n=s.size(),j=n-1;
        while(i<=j){
            std::swap(s[i],s[j]);
            i++;
            j--;
        }
    }
};