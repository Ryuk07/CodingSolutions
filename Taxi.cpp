Task: B. Taxi
time limit per test
3 seconds
memory limit per test
256 megabytes
input
standard input
output
standard output

After the lessons n groups of schoolchildren went outside and decided to visit Polycarpus to celebrate his birthday. We know that the i-th group consists of si friends (1 ≤ si ≤ 4), and they want to go to Polycarpus together. They decided to get there by taxi. Each car can carry at most four passengers. What minimum number of cars will the children need if all members of each group should ride in the same taxi (but one taxi can take more than one group)?

Input

The first line contains integer n (1 ≤ n ≤ 105) — the number of groups of schoolchildren. The second line contains a sequence of integers s1, s2, ..., sn (1 ≤ si ≤ 4). The integers are separated by a space, si is the number of children in the i-th group.

Output

Print the single number — the minimum number of taxis necessary to drive all children to Polycarpus.

Examples

Input

5
1 2 4 3 3

Output

4

Input
Copy

8
2 3 4 4 2 1 3 1

Output
Copy

5

Note

In the first test we can sort the children into four cars like this:

    the third group (consisting of four children),
    the fourth group (consisting of three children),
    the fifth group (consisting of three children),
    the first and the second group (consisting of one and two children, correspondingly). 

There are other ways to sort the groups into four cars.



Solution:



         #include <iostream>
        using namespace std;
         
        int main(){
            
           long long int a[5];
           for(int i=0;i<=4;i++)
              a[i]= 0;
              
           long long  int n,b=0,temp;
            cin>>n;
            
            for(int i = 0;i<n;i++){
                cin>>temp;
                a[temp]++;
            }
            
            b = b + a[4];
            b = b + a[3];
            if(a[1]<=a[3])
               a[1]= 0;
            else
               a[1]= a[1]- a[3];
               
            b = b + (a[2]+1)/2;
            
            if(a[2]%2){
                if(a[1]<=2)
                  b = b;
                else 
                  b = b+ (a[1]-2+3)/4;
            }
            else
              b = b + (a[1]+3)/4;
              
            cout<<b;
               
            
        }