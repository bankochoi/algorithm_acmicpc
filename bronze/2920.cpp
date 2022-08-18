#define _CRT_SECURE_NO_WARNINGS

// 2920.cpp
// 8���� ������ �Է� �޾Ƽ� ��̿� ����
// result = 2 �� �ʱ�ȭ�ϰ�, �Է¹��� 8���� ������
// 1 �� ������ ��� result = 0 ����, 1 2 3 4 5 6 7 8 �� �ƴҰ�� �ٽ� 2�� �����ϰ� �ݺ����� ��������
// 8 �� ������ ��� result = 1 ����, 8 7 6 5 4 3 2 1 �� �ƴҰ�� �ٽ� 2�� �����ϰ� �ݺ����� ���� ����
// result�� 2�� �ʱ�ȭ �Ǿ��ֱ⿡, 1�̳� 8�� �������� �ʴ� ��� result = 2
// switch case���� ���� result == 0 : print ascending, result == 1 : print descending, result == 2 : print mixed



#include <stdio.h>


int main() {

	int arr[8];
	int result=2;

	scanf("%d %d %d %d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4], &arr[5], &arr[6], &arr[7]);


	if (arr[0] == 1)
	{
		result = 0;
		for (int i = 0; i < 7; i++) {

			if (arr[i] + 1 != arr[i + 1]) 
			{ result = 2; break; }
		}
	}

	if (arr[0] == 8)
	{
		result = 1;
		for (int i = 0; i < 7; i++) {

			if (arr[i] - 1 != arr[i + 1]) 
			{ result = 2; break; }
		}
	}


	switch (result) {
	case 0: printf("ascending"); break;
	case 1: printf("descending"); break;
	case 2: printf("mixed"); break;
	}

	return 0;
}


