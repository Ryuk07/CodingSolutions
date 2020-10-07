Task: Priyanka works for an international toy company that ships by container. Her task is to the determine the lowest cost way to combine her orders for shipping. She has a list of item weights. The shipping company has a requirement that all items loaded in a container must weigh less than or equal to 4 units plus the weight of the minimum weight item. All items meeting that requirement will be shipped in one container.

What is the smallest number of containers that can be contracted to ship the items based on the given list of weights?

For example, there are items with weights w=[1,2,3,4,5,10,11,12,13]. This can be broken into two containers: [1,2,3,4,5] and [10,11,12,13]. Each container will contain items weighing within 4 units of the minimum weight item.

Function Description

Complete the toys function in the editor below. It should return the minimum number of containers required to ship.

toys has the following parameter(s):

    w: an array of integers that represent the weights of each order to ship

Input Format

The first line contains an integer n, the number of orders to ship.
The next line contains space-separated integers, w[1],w[2],....,w[n], representing the orders in a weight array.

Constraints

1<=n<=10^5
0<=w[i]<=10^4, where iE[1,n]

Output Format

Return the integer value of the number of containers Priyanka must contract to ship all of the toys.

Sample Input

8
1 2 3 21 7 12 14 21

Sample Output

4

Explanation

The first container holds items weighing 1, 2 and 3. (weights in range 1.......5)
The second container holds the items weighing 21 units. (21.....25)
The third container holds the item weighing 7 units. (7...11)
The fourth container holds the items weighing 12 and 14 units. (12....14)

4 containers are required.


Solution(Help from Discussion):


#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the toys function below.
int toys(vector<int> w) {
    int cnt=0, x=-1;
    sort(w.begin(), w.end());
    for(int i=0 ; i<w.size() ; i++)
        if(w[i]>x){ x=w[i]+4;   cnt++;  }
    return cnt;
}


int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string w_temp_temp;
    getline(cin, w_temp_temp);

    vector<string> w_temp = split_string(w_temp_temp);

    vector<int> w(n);

    for (int i = 0; i < n; i++) {
        int w_item = stoi(w_temp[i]);

        w[i] = w_item;
    }

    int result = toys(w);

    fout << result << "\n";

    fout.close();

    return 0;
}

vector<string> split_string(string input_string) {
    string::iterator new_end = unique(input_string.begin(), input_string.end(), [] (const char &x, const char &y) {
        return x == y and x == ' ';
    });

    input_string.erase(new_end, input_string.end());

    while (input_string[input_string.length() - 1] == ' ') {
        input_string.pop_back();
    }

    vector<string> splits;
    char delimiter = ' ';

    size_t i = 0;
    size_t pos = input_string.find(delimiter);

    while (pos != string::npos) {
        splits.push_back(input_string.substr(i, pos - i));

        i = pos + 1;
        pos = input_string.find(delimiter, i);
    }

    splits.push_back(input_string.substr(i, min(pos, input_string.length()) - i + 1));

    return splits;
}
