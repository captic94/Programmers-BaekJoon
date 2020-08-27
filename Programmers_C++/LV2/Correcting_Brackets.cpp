/*
Level 2 �ùٸ� ��ȣ

���� ����
��ȣ�� �ٸ��� ¦�������ٴ� ���� '(' ���ڷ� �������� �ݵ�� ¦��� ')' ���ڷ� ������ �Ѵٴ� ���Դϴ�.���� ���

()() �Ǵ�(())() �� �ùٸ� ��ȣ�Դϴ�.
)()(�Ǵ�(()(�� �ùٸ��� ���� ��ȣ�Դϴ�.
	'(' �Ǵ� ')' �θ� �̷���� ���ڿ� s�� �־����� ��, ���ڿ� s�� �ùٸ� ��ȣ�̸� true�� return �ϰ�, �ùٸ��� ���� ��ȣ�̸� false�� return �ϴ� solution �Լ��� �ϼ��� �ּ���.

	���ѻ���
	���ڿ� s�� ���� : 100, 000 ������ �ڿ���
	���ڿ� s�� '(' �Ǵ� ')' �θ� �̷���� �ֽ��ϴ�
*/

#include<string>
#include <iostream>

using namespace std;

bool solution(string s)
{
	bool answer = true;

	if (s[0] == '(')
		return false;

	int dir = 0;
	for (int idx = 0; idx < s.length(); idx++)
	{
		if (s[idx] == '(')
			dir++;
		else
			dir--;

		if (dir == 0 && (idx + 1) < s.length())
			if (s[idx] == ')')
				return false;
	}

	if (dir != 0)
		answer = false;

	return answer;
}



// �� ���� �ڵ带 �߰�
int n = 0;
for (int i = 0; i < s.length(); i++) {
	if (n < 0)
		return false;		// �ֽô��� n�� 0���� �۾����ٴ� ���� )�� �ϳ� �� �ִٴ� �ǹ��̹Ƿ� �̹� �� ���ڿ��� ������ ���� ���� ����
	if (s[i] == '(')
		n++;
	else if (s[i] == ')')
		n--;
}
return n == 0;