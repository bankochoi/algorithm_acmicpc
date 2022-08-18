#define _CRT_SECURE_NO_WARNINGS

// 2920.cpp
// 8개의 정수를 입력 받아서 어레이에 저장
// result = 2 로 초기화하고, 입력받은 8개의 정수가
// 1 로 시작할 경우 result = 0 저장, 1 2 3 4 5 6 7 8 이 아닐경우 다시 2를 저장하고 반복문을 빠져나옴
// 8 로 시작할 경우 result = 1 저장, 8 7 6 5 4 3 2 1 이 아닐경우 다시 2를 저장하고 반복문을 빠져 나옴
// result는 2로 초기화 되어있기에, 1이나 8로 시작하지 않는 경우 result = 2
// switch case문을 통해 result == 0 : print ascending, result == 1 : print descending, result == 2 : print mixed



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


