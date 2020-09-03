Task:  Input Format

    The first line will contain an array of size 7. This will represent the Panipuris eaten by Shreya on each day of a week starting from Sunday.

    Second line will also contain an array of size 7. This will represent the Panipuris eaten by Vinit on each day of a week starting from Sunday.

    Third line will contain an integer Q representing the number of queries.

    Next Q lines will contain a string i.e. Sunday, Monday, . . . . , Saturday.

Constraints

    |size of array| = 7

    Elements of the given array cannot exceed 70.

Output Format

For each day, print the name of person, who will pay the money.

Note - The looser (not winner) will pay the money.

Sample Input 0

10 20 15 20 30 40 10
20 10 30 40 50 10 20
5
Monday
Wednesday
Saturday
Friday
Sunday

Sample Output 0

Vinit
Shreya
Shreya
Vinit
Shreya



Solution:

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int q;
    int sh[7],vi[7];
    string ch;
    for(int i=0;i<7;i++){
        cin>>sh[i];
    }
    for(int i=0;i<7;i++){
        cin>>vi[i];
    }
    cin>>q;
    for(int i=0;i<q;i++){
        
        cin>>ch;
        int a =0;
        if(ch=="Sunday"){
            a =1;
        }
        if(ch=="Monday"){
            a =2;
        }
        if(ch=="Tuesday"){
            a =3;
        }
        if(ch=="Wednesday"){
            a =4;
        }
        if(ch=="Thursday"){
            a =5;
        }
        if(ch=="Friday"){
            a =6;
        }
        if(ch=="Saturday"){
            a =7;
        }
        switch(a) {
            case 1 : {
                if(sh[0]>vi[0]){
                    cout<<"Vinit";
                    cout<<endl;
                }
                else{
                    cout<<"Shreya";
                    cout<<endl;
                }
                break;
            }
            case 2 : {
                if(sh[1]>vi[1]){
                    cout<<"Vinit";
                    cout<<endl;
                }
                else{
                    cout<<"Shreya";
                    cout<<endl;
                }
                break;
            }
            case 3 : {
                if(sh[2]>vi[2]){
                    cout<<"Vinit";
                    cout<<endl;
                }
                else{
                    cout<<"Shreya";
                    cout<<endl;
                }
                break;
            }
            case 4 : {
                if(sh[3]>vi[3]){
                    cout<<"Vinit";
                    cout<<endl;
                }
                else{
                    cout<<"Shreya";
                    cout<<endl;
                }
                break;
            }
            case 5 : {
                if(sh[4]>vi[4]){
                    cout<<"Vinit";
                    cout<<endl;
                }
                else{
                    cout<<"Shreya";
                    cout<<endl;
                }
                break;
            }
            case 6 : {
                if(sh[5]>vi[5]){
                    cout<<"Vinit";
                    cout<<endl;
                }
                else{
                    cout<<"Shreya";
                    cout<<endl;
                }
                break;
            }
            case 7 : {
                if(sh[6]>vi[6]){
                    cout<<"Vinit";
                    cout<<endl;
                }
                else{
                    cout<<"Shreya";
                    cout<<endl;
                }
                break;
            }
            default :{
                cout<<"Enter correct value";
                break;
            }
        }
    }
    return 0;
}
