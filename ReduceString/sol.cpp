#include <bits/stdc++.h>

using namespace std;


string superReducedString(string s){

    int i;
   
    bool hasAdj = false;
    string ss = s;

    do{
        hasAdj = false;
        
        if (ss.length() == 2)
            break;

        for(i = 1;i<ss.length();i++){
            if (ss[i-1] == ss[i]){
                hasAdj = true;
                break;
            }
        }

        if (hasAdj)
            ss.erase(i-1,2);
        

    } while(hasAdj);

    return ss.length() == 2 ? "Empty String" : ss;
}

int main(){

    string s;
    getline (cin,s);

    string result = superReducedString(s);
    cout << result << endl;

    return 0;
}



    
   
