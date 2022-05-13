#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



void  mover(vector<int>& arr,int start) {
    
    
    for (int i=arr.size()-2;i>=start;i--)
        arr[i+1] = arr[i];
}

void solve(vector<int>& arr){
     vector<bool> zeros(arr.size(),false);

     for(int i=0;i<arr.size()-2;i++){

         if (arr[i] == 0)
         {
             zeros[i+1] = true;
             mover(arr,i+1);
         }
     }

     for(int i=0;i<zeros.size();i++){
         if (zeros[i])
            arr[i] = 0;
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

int main(){
    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);
    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));
    vector<int> arr;

    for (auto n: first_multiple_input)
        arr.push_back(atoi(n.c_str()));
    
    solve(arr);

    for(auto n : arr)
        cout << n << ", ";

    

}


    
   
