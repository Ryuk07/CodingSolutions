Task: It seems like the year of 2013 came only yesterday. Do you know a curious fact? The year of 2013 is the first year after the old 1987 with only distinct digits.

Now you are suggested to solve the following problem: given a year number, find the minimum year number which is strictly larger than the given one and has only distinct digits.
Input

The single line contains integer y (1000 ≤ y ≤ 9000) — the year number.
Output

Print a single integer — the minimum year number that is strictly larger than y and all it's digits are distinct. It is guaranteed that the answer exists.
Examples
Input
Copy

1987

Output
Copy

2013

Input
Copy

2013

Output
Copy

2014


Solution:


        #include <iostream>
        #include <string>
         
        using namespace std;
         
        int main()
        {
        	string str;
        	int y;
        	cin>>y;
         
        	do
        	{
        		y=y+1;
        		str= to_string(y);
        	}while(str[0]==str[1]||str[0]==str[2]||str[0]==str[3]||str[1]==str[2]||str[1]==str[3]||str[2]==str[3] );
         
        	cout<<str;
         
         
         
         
         
         
        	return 0;
        }