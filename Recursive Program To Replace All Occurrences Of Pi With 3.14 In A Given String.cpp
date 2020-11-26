Task: Recursive program to replace all occurrences of pi with 3.14 in a given string
Last Updated: 26-11-2020

Given string str of size N. The task is to write a recursive function to replace all occurrences of pi with 3.14 in the given string and print the modified string.

Examples: 

    Input : str = “pippppiiiipi” 
    Output : 3.14ppp3.14iii3.14

    Input : str = “pip” 
    Output : 3.14p

    Input : str = “xpix” 
    Output : x3.14x


Approach:

A simple recursive approach to replace all pi in a given function with “3.14”. Firstly function is declared we don’t need any helper function.

    Base case if the string is empty or the length of the string is 1 return the string.
    If the 0th and 1st element of the string is p and we have to handle them for the rest we have to call recursion it will give the result.
    If not then we have to call recursion from 1st to all elements then add recursion result to 1st element and return it.



Solution:


// C++ program for above approach
#include <bits/stdc++.h>
using namespace std;
 
// A simple recursive approach 
// to replace all pi in a given
// function with "3.14". Firstly
// function is declared we don't 
// need any helper function one 
// function is enough 
string replacePi(string s)
{ 
     
    // Base case if s is empty
    // or length of s is 1
    // return the s
    if (s.length() == 0 || s.length() == 1)
        return s;
       
    // If the 0th and 1st element 
    // of s are p and i we have to
    // handle them for rest we have
    // to call recursion it will 
    // give the result
    if (s[0] == 'p' && s[1] == 'i')
    {
         
        // Smalloutput is a variable 
        // used to store recursion result
        string smallOutput = replacePi(s.substr(2));    
          
        // And we have to add the recursion 
        // result with the first part we 
        // handeled and return the answer
        return "3.14" + smallOutput;
    }
    else
    {
         
        // If not then we have to call 
        // recursion from 1st to all elements
        // then add recursion result to 
        // 1st element and return it
        string smallOutput = replacePi(s.substr(1));
        return s[0] + smallOutput;
    }
}
 
// Driver code
int main()
{
    string s = "pipppiiipi";
      
    // Function call
    string result = replacePi(s);
     
    cout << result << endl;
 
    return 0;
}