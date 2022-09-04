
//1316.py

// �������� ®���� �������� �ʴ� ���� ��õ�Ѵ�
// 
// �⺻���� �˰�����
// �Էµ� ���ڿ��� ���ÿ� ��� push�Ѵ�.
// �� ���� ���ڸ� pop �Ѵ�. ������ top�� ���� ���ڿ� �ٸ� ���ڰ� ���� �� ���� ���� pop�Ѵ�.
// ���� ���ڰ� set�� ���ٸ� �߰��Ѵ�. set�� �̹� �ִٸ� �� ���ڿ��� �׷� �ܾ �ƴϴ�
// �� ������ ������ ���ļ� '�׷� �ܾ �ƴϴ�' ��� �Ǻ����� �ʾҴٸ� �� �ܾ�� �׷�ܾ��̴�.

// �ε�, ���� stack�� include ���� �ʰ� �׳� str���� �޾Ƽ� index�� �ϳ��� �Űܰ��� �׽�Ʈ �ߴµ�,
// �߻��� �� �ִ� ���� ��Ȳ�� ���� ������ if���� ����� ó�������Ƿ�, ���� ������ ambiguous������.
// ���� �� ������ ���ؼ��� �������� �ʴ� ���� ��õ�Ѵ� .. �˼��ϴ�


#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <set>


int main() {

	int N;
	int result = 0;
	int isgroup;



	scanf("%d", &N);

	for (int i = 0; i < N; i++) {

		std::string str;

		std::cin >> str;

		std::set<char> used;

		// �ܾ��� �� �� ���ں��� �����Ͽ�
		// ���� ���ڰ� ���� ���ڿ� ���� ���ڸ� index ����;
		// ���� ���ڰ� ���� ���ڿ� �ٸ� ���ڸ� set�� ���� ���� �߰� �� index ����;
		isgroup = 1;

		if (str.length() < 3) {
			result++; continue;
		}

		for (int j = 0; j < str.length() - 1; j++) {

			if (used.count(str[j])) {
				isgroup = 0;
				break;
			}

			used.insert(str[j]);

			while (str[j] == str[j + 1]) {
				j++;
				continue;
			}
		}


		if (str[str.length() - 1] != str[str.length() - 2] && used.count(str[str.length() - 1]))
			isgroup = 0;

		if (isgroup) result++;
																								
	}


	printf("%d", result);


	return 0;
}




