

// 2752.cpp
// �Է��� ���� ������ �ְ� �ð� ���ѵ� �˳��ؼ� ������ ����
// ���ڰ� ���� �� �̹Ƿ� �׳� �������ķ� ¥�� ����� �� ������,
// ��� �����ϴ°� �������ķ� ®��!



#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



void InsertionSort(int arr[]) {

	int j, temp;


	for (int i =0 ; i < 2 ; i ++ )
	{ 
		j = i;

		while (j >= 0 && arr[j] > arr[j + 1])
		{
			temp = arr[j+1];

			arr[j + 1] = arr[j];
			arr[j] = temp;

			j--;
		}
	}

	printf("%d %d %d", arr[0], arr[1], arr[2]);
}


int main() {

	int arr[3];

	scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);


	InsertionSort(arr);

	return 0;
}





