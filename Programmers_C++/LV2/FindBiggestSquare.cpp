/*
Level 2 ���� ū ���簢�� ã��

1�� 0�� ä���� ǥ(board)�� �ֽ��ϴ�. ǥ 1ĭ�� 1 x 1 �� ���簢������ �̷���� �ֽ��ϴ�.
ǥ���� 1�� �̷���� ���� ū ���簢���� ã�� ���̸� return �ϴ� solution �Լ��� �ϼ��� �ּ���.
(��, ���簢���̶� �࿡ ������ ���簢���� ���մϴ�.)

���� ���
1	2	3	4
---------------
0	1	1	1
1	1	1	1
1	1	1	1
0	0	1	0
�� �ִٸ� ���� ū ���簢���� ���̴� 9�� �ȴ�

ǥ(board)�� 2���� �迭�� �־����ϴ�.
ǥ(board)�� ��(row)�� ũ�� : 1,000 ������ �ڿ���
ǥ(board)�� ��(column)�� ũ�� : 1,000 ������ �ڿ���
ǥ(board)�� ���� 1�Ǵ� 0���θ� �̷���� �ֽ��ϴ�.
*/

#include <iostream>
#include<vector>
using namespace std;

int solution(vector<vector<int>> board)
{
	int answer = 1234;

	for (vector<int> rowVec : board)
	{
		int rowSize = rowVec.size();

		for (int idx = 0; i < rowSize; idx++)
		{
			int cnt = 0;
			if (cnt > rowSize)
			{

			}
		}
	}


	return answer;
}