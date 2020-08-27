#include <string>
#include <vector>

using namespace std;

vector<vector<int>> solution(vector<vector<int>> arr1, vector<vector<int>> arr2) {
    vector<vector<int>> answer;
    vector<int> vec;
    for (int i = 0; i < arr1.size(); i++)
    {
        for (int v = 0; v < arr2[0].size(); v++)
        {
            int sum = 0;
            for (int j = 0; j < arr1[i].size(); j++)
            {
                sum += arr1[i][j] * arr2[j][v];
            }
            vec.push_back(sum);
        }
        answer.push_back(vec);
        vec.clear();
    }
    
    
    return answer;
}