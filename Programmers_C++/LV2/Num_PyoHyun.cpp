#include <string>
#include <vector>
#include <iostream>
using namespace std;

int solution(int n) {
	int answer = 1;
	int tmp = 1;
	int sum = 0;

	while (tmp <= n / 2)
	{
		for (int i = tmp; sum < n; i++)
		{
			sum += i;
			cout << sum << " ";
		}

		cout << endl << "sum : " << sum << endl;
		if (sum == n)
			answer++;

		sum = 0;
		tmp++;
	}

	return answer;
}

int main(void)
{

	cout << endl << solution(15) << endl;
	cout << solution(8) << endl;

	return 0;
}