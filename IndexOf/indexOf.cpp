#include <iostream>
#include <string>

using namespace std;
int indexOf(string word,string sub)
{
	int i,j,k, index = -1;
	bool match = false;
    
	for(i=0;i<word.length();i++){
		if (word[i] == sub[0])
		{
		    match = true;
            index = i;
            for (int j=i,k=0;k<sub.length();k++,j++){
                if (word[j] != sub[k])
                    match = false;
            }
        
            if (match)
                break;		
		}
	}

    if (!match)
        return -1;
    return index;
}

int main(int argc,char **argv){
    
    string word = "ghABCdABCFa";
    string sub = "ABCF";

    int index = 0;

    index = indexOf(word,sub); 
    cout << index << endl;
    return 0;
}
