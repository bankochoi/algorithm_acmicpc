


//2475.cpp

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



int main() {


	int arr[5];

	scanf("%d %d %d %d %d", &arr[0], &arr[1], &arr[2], &arr[3], &arr[4]);

	printf("%d", (arr[0] * arr[0] + arr[1] * arr[1] + arr[2] * arr[2] + arr[3] * arr[3] + arr[4] * arr[4])%10);


	return 0;
}

