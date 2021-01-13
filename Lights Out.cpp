Task: Lenny is playing a game on a 3 × 3 grid of lights. In the beginning of the game all lights are switched on. Pressing any of the lights will toggle it and all side-adjacent lights. The goal of the game is to switch all the lights off. We consider the toggling as follows: if the light was switched on then it will be switched off, if it was switched off then it will be switched on.

Lenny has spent some time playing with the grid and by now he has pressed each light a certain number of times. Given the number of times each light is pressed, you have to print the current state of each light.
Input

The input consists of three rows. Each row contains three integers each between 0 to 100 inclusive. The j-th number in the i-th row is the number of times the j-th light of the i-th row of the grid is pressed.
Output

Print three lines, each containing three characters. The j-th character of the i-th line is "1" if and only if the corresponding light is switched on, otherwise it's "0".
Examples
Input
Copy

1 0 0
0 0 0
0 0 1

Output
Copy

001
010
100

Input
Copy

1 0 1
8 8 8
2 0 3

Output
Copy

010
011
100


Solution:


    #include <iostream>
     
    using namespace std;
     
    int main()
    {
        int x11, x12, x13, x21, x22, x23, x31, x32, x33;
        cin >> x11 >> x12 >> x13 >> x21 >> x22 >> x23 >> x31 >> x32 >> x33;
        cout << ((x11 + x12 + x21) % 2 == 0 ? "1" : "0") << ((x11 + x12 + x13 + x22) % 2 == 0 ? "1" : "0") << ((x12 + x13 + x23) % 2 == 0 ? "1" : "0") << endl;
        cout << ((x11 + x21 + x22 + x31) % 2 == 0 ? "1" : "0") << ((x12 + x21 + x22 + x23 + x32) % 2 == 0 ? "1" : "0") << ((x13 + x22 + x23 + x33) % 2 == 0 ? "1" : "0") << endl;
        cout << ((x21 + x31 + x32) % 2 == 0 ? "1" : "0") << ((x22 + x31 + x32 + x33) % 2 == 0 ? "1" : "0") << ((x23 + x32 + x33) % 2 == 0 ? "1" : "0") << endl;
        return 0;
    }