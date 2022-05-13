#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);



void  mover(vector<int>& nums,int start) {
    
    
    for (int i=nums.size()-2;i>=start;i--)
        nums[i+1] = nums[i];
}


int solve(vector<int>& nums,int val)
{
    int freq = 0;
    for (int i=0;i<nums.size();i++){

        if (nums[i] == val){
            for (int j=i;j<nums.size()-2;j++)
            {
                int v = j+1;
                int temp = nums[nums.size()-v];
                nums[nums.size()-v]= nums[v];
                nums[v] = temp;
            }
            cout  << "move #" << i << ":";
            for (auto k: nums)
                cout << k << " ";

            cout << endl;
            
        }

    }
    
    for (int i=0;i<nums.size();i++)
    {
        if (nums[i]==val){
            freq = i;
            break;
        }
    }
    return freq;

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
    vector<int> nums;

    for (auto n: first_multiple_input)
        nums.push_back(atoi(n.c_str()));
    
    int r = solve(nums,2);

    for(auto n: nums)
        cout << n << " ";

    cout << endl << "count: " << r << endl;
    

}


    
   
