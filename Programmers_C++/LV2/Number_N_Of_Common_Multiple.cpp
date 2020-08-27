#include <string>
#include <vector>

using namespace std;

int solution(vector<int> arr) {
	int answer = 1;
	vector<int> vec;
	int num = 0;
	for (int n : arr)
	{
        for (int i = 0; i < vec.size(); i++)
        {
            if (n % vec[i] == 0)
                n /= vec[i];
        }

		for (int i = 2; i <= n; i++)
		{
			if (n % i == 0)
			{
				vec.push_back(i);
				n /= i;
				i = 1;
			}
		}

	}

	for (int i : vec)
		answer *= i;

	return answer;
}