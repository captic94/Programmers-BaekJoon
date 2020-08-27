#include <string>
#include <vector>
#include <sstream>
using namespace std;

string solution(string s) {
    string answer = "";
    stringstream ss(s);
    string tok = "";
    ss >> tok;
    
    int min = stoi(tok);
    int max = min;
    
    while(ss >> tok)
    {
        int tmp = stoi(tok);
        if (tmp < min)
            min = tmp;
        
        if (tmp > max)
            max = tmp;
    }
    
    answer = to_string(min) + " " + to_string(max);
    return answer;
}