#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

int main(){
    int T;
    string l;

    getline(cin,l);
    T = stoi(l);
    vector<string> lines;
    for (int cas=1;cas<=T;cas++){
        string line;
        getline(cin,line);
        lines.push_back(line);
    }

    for(int i=0;i<lines.size();i++){
        cout << "line #" << i << "  " << lines[i] << endl;
        //convert split items
        //vector<string> first_multiple_input = split(rtrim(line[i]));
        //convert items to int
        //for (auto n: line[i])
        //  int num = stoi(n);

    }

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
