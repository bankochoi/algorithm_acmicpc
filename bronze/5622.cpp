

// 5622
// 간단한 문제

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

int main() {

	char* str= (char*)malloc(sizeof(char)*15);
	int i = 0;
	int num=0;
	int arr[26] = { 3, 3, 3, 4, 4, 4, 5, 5, 
		5 ,6 ,6 ,6 ,7 ,7 ,7 ,8 ,8 ,8, 8 ,9 ,9 ,9 ,10, 10, 10, 10 };

	scanf("%s", str);


	while (str[i] != NULL) {

		num +=arr[(int)(str[i]) - (int)('A')];

		i++;
	}


	printf("%d", num);


	return 0;
}


