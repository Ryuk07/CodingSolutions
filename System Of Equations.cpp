Task: Furik loves math lessons very much, so he doesn't attend them, unlike Rubik. But now Furik wants to get a good mark for math. For that Ms. Ivanova, his math teacher, gave him a new task. Furik solved the task immediately. Can you?

You are given a system of equations:

You should count, how many there are pairs of integers (a, b) (0 ≤ a, b) which satisfy the system.
Input

A single line contains two integers n, m (1 ≤ n, m ≤ 1000) — the parameters of the system. The numbers on the line are separated by a space.
Output

On a single line print the answer to the problem.
Examples
Input
Copy

9 3

Output
Copy

1

Input
Copy

14 28

Output
Copy

1

Input
Copy

4 20

Output
Copy

0

Note

In the first sample the suitable pair is integers (3, 0). In the second sample the suitable pair is integers (3, 5). In the third sample there is no suitable pair.



Solution:



    #include <bits/stdc++.h>
    using namespace std;
    int main()
    {
     
        int n,m;
     
        cin >> n >> m;
        int a,b,t;
     
        int c=0;
     
        for(b=0;b<=n;b++)
        {
            t=n-b;
     
            a=sqrtl(n-b);
     
            if(a*a==t)
            {
                if(a+b*b==m)
                {
                    c++;
                }
            }
        }
        cout << c;
        return 0;
    }