#include <bits/stdc++.h>

using namespace std;


int camelCase(string s){
    int wCount = s.length() > 0 ? 1 : 0;

    for(auto c: s){
        if (c >= 'A' && c <= 'Z')
            wCount++;

    }

    return wCount; 
}

int main(){

    string s;
    getline (cin,s);

    auto result = camelCase(s);
    cout << result << endl;

    return 0;
}



    
   
