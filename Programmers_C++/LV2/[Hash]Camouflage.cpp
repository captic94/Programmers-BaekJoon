#include <string>
#include <vector>
#include <map>

using namespace std;

int solution(vector<vector<string>> clothes) {
	int answer = 1;
	map<string, int> maps;
	map<string, int>::iterator iter;


	for (vector<string> cl : clothes)
	{
		if (maps.end() != maps.find(cl[1]))
		{
			iter = maps.find(cl[1]);
			iter->second++;
		}
		else
			maps.insert(pair<string, int>(cl[1], 1));
	}

	for (iter = maps.begin(); iter != maps.end(); iter++)
		answer *= (iter->second + 1);

	return answer - 1;
}