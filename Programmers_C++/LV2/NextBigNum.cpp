/*
�ڿ��� n�� �־����� ��, n�� ���� ū ���ڴ� ������ ���� ���� �մϴ�.

���� 1. n�� ���� ū ���ڴ� n���� ū �ڿ��� �Դϴ�.
���� 2. n�� ���� ū ���ڿ� n�� 2������ ��ȯ���� �� 1�� ������ �����ϴ�.
���� 3. n�� ���� ū ���ڴ� ���� 1, 2�� �����ϴ� �� �� ���� ���� �� �Դϴ�.
���� �� 78(1001110)�� ���� ū ���ڴ� 83(1010011)�Դϴ�.

�ڿ��� n�� �Ű������� �־��� ��, n�� ���� ū ���ڸ� return �ϴ� solution �Լ��� �ϼ����ּ���.

���� ����
n�� 1,000,000 ������ �ڿ��� �Դϴ�.
*/

#include <string>
#include <vector>

using namespace std;

int binary(int num)
{
	int sum = 0;

	for (num; num > 0; num /= 2)
		sum += (num % 2);

	return sum;
}

int solution(int n) {
	int answer = n + 1;
	int sum = 0;
	vector<int> bianry;

	sum = binary(n);

	int bi = bianry(answer);
	for (bi; bi != sum; answer++)
		bi = bianry(answer);

	do
	{
		anwer++;
		bi = 

	} while (bi != sum);


	return answer;
}