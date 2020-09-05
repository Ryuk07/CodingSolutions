Task:  Shreya is President of VinnovateIT. She assigns a question to core members. The question is -

You have given a non-empty string. This string consists of lowercase or uppercase or both English letters. The length of the string will not exceed 1000.

Convert the string using following cases:

Case 1: If first character of string is in lowercase then second character should be in uppercase, third character should be in lowercase and so on till the last character of the string.

For example :

                        Input:   vinitshahdeo

                        Output:   vInItShAhDeO

Case 2: If first character of string is in uppercase then second character should be in lowercase, third character should be in uppercase and so on till the last character of the string.

For example :

                       Input:    Vinitshahdeo

                       Output:   ViNiTsHaHdEo

Input Format

The first line of the input contains a single integer T denoting the number of test cases.

The first line of each test case contains a string.

Constraints

1 ≤ T ≤ 100

Output Format

For each test case, output the require string in newline.

Sample Input 0

2
vinitshahdeo
Shreyaanand

Sample Output 0

vInItShAhDeO
ShReYaAnAnD



Solution:

#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    int n,a;
    string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s;
        a = s.size();
        if(islower(s.at(0))){
            for(int j=0;j<a;j++){
                if(j%2!=0){
                s.at(j) = toupper(s.at(j));
            }
                else{
                    s.at(j) = tolower(s.at(j));
                }
        }
        }
        else{
            for(int q=0;q<a;q++){
                if(q%2==0){
                s.at(q)=toupper(s.at(q));
            }
                else{
                    s.at(q) = tolower(s.at(q));
                }
        }
        }
        cout<<s<<endl;
    }
    return 0;
}
