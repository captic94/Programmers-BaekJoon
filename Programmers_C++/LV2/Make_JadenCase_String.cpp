#include <string>
#include <vector>

using namespace std;

string solution(string s) {
    bool check = true;
    
    for(int i = 0; i < s.size(); i++)
    { 
        if (check)
            s[i] = toupper(s[i]);
        else
            s[i] = tolower(s[i]);
            
        if (s[i] == ' ')
            check = true;
        else
            check = false;
    }
	
	return s;
}