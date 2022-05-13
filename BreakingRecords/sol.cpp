//why don't use min  max functions
//because we not searching for min values, we are searching when
//value change for up or down.
//starting for first value;
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

 
vector<int> breakingRecords(vector<int> scores){
    vector<int> result;
    int cmin = scores[0];
    int cmax = scores[0];

    int countMax = 0;
    int countMin = 0;
    for (int i=0;i<scores.size();i++){
        if (scores[i] < cmin)
        {
            countMin++;
            cmin = scores[i];
        } else if (scores[i] > cmax)
        {
            countMax++;
            cmax = scores[i];
        }
    }

    result.push_back(countMax);
    result.push_back(countMin);

    return result;
}
int main(){
    int T;
    string l;

    getline(cin,l);
    T = stoi(l);
    string scores_temp_string;
    getline(cin, scores_temp_string);
    vector<string> temp_scores = split(rtrim(scores_temp_string));
    vector<int> scores(T);
    for(int i=0;i<T;i++){
        int score_item = stoi(temp_scores[i]);
        scores[i] = score_item;
    }

    vector<int> result = breakingRecords(scores);
    for (auto s : result) cout << s << " ";
    cout << endl;

}
vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}
