/*
자연수 n이 주어졌을 때, n의 다음 큰 숫자는 다음과 같이 정의 합니다.

조건 1. n의 다음 큰 숫자는 n보다 큰 자연수 입니다.
조건 2. n의 다음 큰 숫자와 n은 2진수로 변환했을 때 1의 갯수가 같습니다.
조건 3. n의 다음 큰 숫자는 조건 1, 2를 만족하는 수 중 가장 작은 수 입니다.
예를 들어서 78(1001110)의 다음 큰 숫자는 83(1010011)입니다.

자연수 n이 매개변수로 주어질 때, n의 다음 큰 숫자를 return 하는 solution 함수를 완성해주세요.

제한 사항
n은 1,000,000 이하의 자연수 입니다.
*/

#include <string>
#include <vector>

using namespace std;
int binary(int num)
{
	int sum = 0;
	// 인자로 들어오는 숫자의 2진수의 각자리를 더한다 -> 2진수로 변환했을 때 1의 갯수
	for (num; num > 0; num /= 2)
		sum += (num % 2);

	return sum;
}

int solution(int n) {
	int answer = n;
	int sum = 0;
	// n의 2진수로 변환했을 때 1의 갯수
	sum = binary(n);
	int bi = 0;
	// n 보다 크지만 2진수 일때 n과 같은 수의 1을 가진 수 찾기
	do
	{
		answer++;
		bi = binary(answer);
	} while (bi != sum);


	return answer;
}