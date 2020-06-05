#include <string>
#include <vector>

using namespace std;

string solution(string phone_number) {
	int num = phone_number.length();
	string stars;

	for (int i = 0; i < num - 4; i++)
		stars += "*";

	string answer = phone_number.replace(0, num - 4, stars);

	return answer;
}