
/*
// #2751 : 수 정렬하기2
// 
// 역시 간단한 정렬 알고리즘을 이용하면 된다
// 다만 입력의 수가 1,000,000 까지 될 수 있고, 시간 제한이 2초이므로
// 시간복잡도가 O(N^2) 인 알고리즘으로는 해결이 불가능하다.
// 평균적으로 가장 빠른 퀵소트를 이용하자

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>



void QuickSort(int* arr, int start, int end) {

	if (start >= end) return;

	int pivot = start; // arr의 첫번째 원소를 pivot으로 선택하는 quick정렬
					   // 반드시 첫번쨰 원소를 pivot으로 선택할 필요는 없다

	int i = start + 1; // i 는 arr의 왼쪽부터 탐색
	int j = end; // j는 arr의 오른쪽 부터 탐색
	int temp;
	
	while ()
	while (i <= end && arr[i] <= arr[pivot]) {
		i++; // i에서의 값이 pivot에서의 값 보다 큰 경우 i를 멈춘다
			    // end까지 도달한 경우도 멈춘다
		}

	while (j > start && arr[j] >= arr[pivot]) {
		j++; // j에서 값이 pivot에서의 값 보다 작은 경우 j를 멈춘다
				 // start 앞까지 도달한 경우도 멈춘다
		}
	
	if (i > j )



	//devide into 2 partition : one on the leftside of the pivot and another on the rightside.


}






int main() {

	int* arr;
	int N;
	
	scanf("%d", N);

	arr = (int*)malloc(sizeof(int) * N);



	for (int i = 0; i < N; i++) {

		scanf("%d", &arr[i]);

	}

	
	QuickSort(arr, 0, N-1);




	return 0;
}



*/