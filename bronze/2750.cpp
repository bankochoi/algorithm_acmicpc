

// 2750.cpp
// 간단한 정렬 문제
// 연습삼아 삽입정렬을 이용해보았다

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int* InsertionSort(int *arr, int length_arr) {

	int i, j, temp;

	//삽입정렬 알고리즘
	// for i : i = index from first item of array to last-1 item
	//    for j : j = index i ~ 0
	// i는 고정, j가 변수인 loop에서 arr[j] > arr[j+1] 를 한번 만족하면 그 앞쪽은 전부 정렬이 되어있다.
	// 즉 arr의 j번째 요소가 들어가야할 자리를 찾아 insert 해주는 알고리즘

	for (i = 0; i < length_arr-1; i++) {
		j = i;
		while (j >= 0 && arr[j] > arr[j + 1])
		{
			temp = arr[j];
			arr[j] = arr[j + 1];
			arr[j + 1] = temp;

			j--;
		}
	}
	return arr;
}


int main() {

	int* arr;
	int N;

	scanf("%d", &N);

	arr = (int*)malloc(sizeof(int) * N);

	for (int i = 0; i < N; i++) {

		scanf("%d", &arr[i]);

	}

	arr = InsertionSort(arr, N);

	for (int i = 0; i < N; i++)
		printf("%d\n", arr[i]);


	return 0;
}
