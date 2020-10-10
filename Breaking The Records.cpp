Task: Maria plays college basketball and wants to go pro. Each season she maintains a record of her play. She tabulates the number of times she breaks her season record for most points and least points in a game. Points scored in the first game establish her record for the season, and she begins counting from there.

For example, assume her scores for the season are represented in the array scores = [12,24,10,24]. Scores are in the same order as the games played. She would tabulate her results as follows:

                                 Count
Game  Score  Minimum  Maximum   Min Max
 0      12     12       12       0   0
 1      24     12       24       0   1
 2      10     10       24       1   1
 3      24     10       24       1   1

Given the scores for a season, find and print the number of times Maria breaks her records for most and least points scored during the season.

Function Description

Complete the breakingRecords function in the editor below. It must return an integer array containing the numbers of times she broke her records. Index 0 is for breaking most points records, and index 1 is for breaking least points records.

breakingRecords has the following parameter(s):

    scores: an array of integers

Input Format

The first line contains an integer n, the number of games.
The second line contains n space-separated integers describing the respective values of score0,score1,score2,......scoren-1.

Constraints
1<=n<=1000
0<=score[i]<=10^8

Output Format

Print two space-seperated integers describing the respective numbers of times the best (highest) score increased and the worst (lowest) score decreased.

Sample Input 0

9
10 5 20 20 4 5 2 25 1

Sample Output 0

2 4


Solution:


#include <bits/stdc++.h>

using namespace std;

vector<string> split_string(string);

// Complete the breakingRecords function below.

vector<int> breakingRecords(vector<int> scores) {
    vector<int> Minmax(2);  //VERY CRUCIAL FOR AVOIDING SEGMENTATION FAULT

int i=0;
long long int Min=0, Max=0;

Max = scores.at(i);
Min = scores.at(i);i++;

while (i< scores.size())
{
if(scores.at(i) > Max)
{
    Max = scores.at(i);Minmax.at(0)++;
}
else if(scores.at(i) < Min)
{
    Min = scores.at(i);Minmax.at(1)++;
}
i++;
}

return(Minmax);


}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    string scores_temp_temp;
    getline(cin, scores_temp_temp);

    vector<string> scores_temp = split_string(scores_temp_temp);

    vector<int> scores(n);

    for (int i = 0; i < n; i++) {
        int scores_item = stoi(scores_temp[i]);

        scores[i] = scores_item;
    }

    vector<int> result = breakingRecords(scores);

    for (int i = 0; i < result.size(); i++) {
        fout << result[i];

        if (i != result.size() - 1) {
            fout << " ";
        }
    }

    fout << "\n";

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


