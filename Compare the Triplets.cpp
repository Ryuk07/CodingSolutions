Task: Alice and Bob each created one problem for HackerRank. A reviewer rates the two challenges, awarding points on a scale from 1 to 100 for three categories: problem clarity, originality, and difficulty.

The rating for Alice's challenge is the triplet a = (a[0], a[1], a[2]), and the rating for Bob's challenge is the triplet b = (b[0], b[1], b[2]).

The task is to find their comparison points by comparing a[0] with b[0], a[1] with b[1], and a[2] with b[2].

    If a[i] > b[i], then Alice is awarded 1 point.
    If a[i] < b[i], then Bob is awarded 1 point.
    If a[i] = b[i], then neither person receives a point.

Comparison points is the total points a person earned.

Given a and b, determine their respective comparison points. 

Function Description:

Complete the function compareTriplets in the editor below.

compareTriplets has the following parameter(s):

    int a[3]: Alice's challenge rating
    int b[3]: Bob's challenge rating

Return:

    int[2]: Alice's score is in the first position, and Bob's score is in the second.

Input Format:

The first line contains 3 space-separated integers, a[0], a[1], and a[2], the respective values in triplet a.
The second line contains 3 space-separated integers, b[0], b[1], and b[2], the respective values in triplet b.

Constraints:

    1 ≤ a[i] ≤ 100
    1 ≤ b[i] ≤ 100


Solution:

#include <iostream>
using namespace std;

int compareTriplets(int c[] , int d[]){
    int a_count=0 , b_count =0;
    for(int i=0; i<3; i++){
        if(c[i]>d[i]){
            a_count +=1;
        }
        
        else if(c[i]<d[i]){
            b_count +=1;
        }
        
        else{
            continue;
        }
    }
    cout<<a_count<<" "<<b_count;
    return 0;
}

int main() {
    int a[3],b[3];
    int count;
    for(int i=0; i<3; i++){
        cin>>a[i];
    }
    for(int i=0; i<3; i++){
        cin>>b[i];
    }
    count = compareTriplets(a,b);
    return 0;
}