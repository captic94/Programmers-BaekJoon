/*
Level 2 올바른 괄호

문제 설명
괄호가 바르게 짝지어졌다는 것은 '(' 문자로 열렸으면 반드시 짝지어서 ')' 문자로 닫혀야 한다는 뜻입니다.예를 들어

()() 또는(())() 는 올바른 괄호입니다.
)()(또는(()(는 올바르지 않은 괄호입니다.
	'(' 또는 ')' 로만 이루어진 문자열 s가 주어졌을 때, 문자열 s가 올바른 괄호이면 true를 return 하고, 올바르지 않은 괄호이면 false를 return 하는 solution 함수를 완성해 주세요.

	제한사항
	문자열 s의 길이 : 100, 000 이하의 자연수
	문자열 s는 '(' 또는 ')' 로만 이루어져 있습니다
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



// 더 좋은 코드를 발견
int n = 0;
for (int i = 0; i < s.length(); i++) {
	if (n < 0)
		return false;		// 애시당초 n이 0보다 작아진다는 뜻은 )가 하나 더 있다는 의미이므로 이미 그 문자열은 온전히 끝날 수가 없다
	if (s[i] == '(')
		n++;
	else if (s[i] == ')')
		n--;
}
return n == 0;