Input Format

Input consists of the following space-separated values: int, long, char, float, and double, respectively.

Output Format

Print each element on a new line in the same order it was received as input. Note that the floating point value should be correct up to 3 decimal places and the double to 9 decimal places.


Solution :
 

#include <iostream>
#include <iomanip>
#include <cstdio>
using namespace std;

int main() {
    int a ; long b ; char c ; float d ; double e;
    std::cin >> a >> b >> c >> d >> e;
    std::cout<< a << std::endl;
    std::cout<< b << std::endl;
    std::cout<< c << std::endl;
    std::cout<<fixed<<setprecision(3)<< d << std::endl;
    std::cout<<fixed<<setprecision(9)<< e<< std::endl;
    return 0;
}