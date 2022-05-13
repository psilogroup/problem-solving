/*
 *
 * if (v1 < v2 they will nerver meet up
 * It is required to check if a solution exists for the following equation: 
 * x1+t*v1 == x2+t*v2
 * This is equivalent to checking if (x1-x2) % (v2 - v1) == 0;
 */

#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



string kangaroo(int x1, int v1, int x2, int v2) {

    string response = "NO";
    bool canCatchUp (v2 < v1);
    if (canCatchUp) {
        bool willIntersectOnLand = (x1 - x2) % (v2 - v1) == 0;
        if (willIntersectOnLand)
            response = "YES";
    }

    return response;
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

int main(){
    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);
    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));
    int x1 = stoi(first_multiple_input[0]);

    int v1 = stoi(first_multiple_input[1]);

    int x2 = stoi(first_multiple_input[2]);

    int v2 = stoi(first_multiple_input[3]);

    string result = kangaroo(x1, v1, x2, v2);

    cout << result << "\n";

}


    
   
