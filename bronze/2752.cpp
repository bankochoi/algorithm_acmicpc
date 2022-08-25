

// 2752.cpp
// 입력의 수도 정해져 있고 시간 제한도 넉넉해서 간단한 문제
// 숫자가 세개 뿐 이므로 그냥 버블정렬로 짜도 충분할 것 같지만,
// 기왕 연습하는거 삽입정렬로 짰다!



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





