

// 2750.cpp
// ������ ���� ����
// ������� ���������� �̿��غ��Ҵ�

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


int* InsertionSort(int *arr, int length_arr) {

	int i, j, temp;

	//�������� �˰���
	// for i : i = index from first item of array to last-1 item
	//    for j : j = index i ~ 0
	// i�� ����, j�� ������ loop���� arr[j] > arr[j+1] �� �ѹ� �����ϸ� �� ������ ���� ������ �Ǿ��ִ�.
	// �� arr�� j��° ��Ұ� ������ �ڸ��� ã�� insert ���ִ� �˰���

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
