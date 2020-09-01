Task:  Given a time in 12-hour AM/PM format, convert it to military (24-hour) time.

Note: Midnight is 12:00:00AM on a 12-hour clock, and 00:00:00 on a 24-hour clock. Noon is 12:00:00PM on a 12-hour clock, and 12:00:00 on a 24-hour clock.

Function Description:

Complete the timeConversion function in the editor below. It should return a new string representing the input time in 24 hour format. 

Solution:


#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <sstream>
#include <iomanip>
using namespace std;

int main(){
    int h, m, s;
    char ch, aorp;
    
    cin >> h >> ch >> m >> ch >> s >> aorp >> ch;
    h = (aorp == 'A') ? (h==12 ? 0 : h) : (h==12 ? 12 : h+12);
        
    cout << setw(2) << setfill('0') << h << ":" 
         << setw(2) << setfill('0') << m << ":" 
         << setw(2) << setfill('0') << s << endl;
    
    return 0;
}