
/*
// #2751 : �� �����ϱ�2
// 
// ���� ������ ���� �˰����� �̿��ϸ� �ȴ�
// �ٸ� �Է��� ���� 1,000,000 ���� �� �� �ְ�, �ð� ������ 2���̹Ƿ�
// �ð����⵵�� O(N^2) �� �˰������δ� �ذ��� �Ұ����ϴ�.
// ��������� ���� ���� ����Ʈ�� �̿�����

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>



void QuickSort(int* arr, int start, int end) {

	if (start >= end) return;

	int pivot = start; // arr�� ù��° ���Ҹ� pivot���� �����ϴ� quick����
					   // �ݵ�� ù���� ���Ҹ� pivot���� ������ �ʿ�� ����

	int i = start + 1; // i �� arr�� ���ʺ��� Ž��
	int j = end; // j�� arr�� ������ ���� Ž��
	int temp;
	
	while ()
	while (i <= end && arr[i] <= arr[pivot]) {
		i++; // i������ ���� pivot������ �� ���� ū ��� i�� �����
			    // end���� ������ ��쵵 �����
		}

	while (j > start && arr[j] >= arr[pivot]) {
		j++; // j���� ���� pivot������ �� ���� ���� ��� j�� �����
				 // start �ձ��� ������ ��쵵 �����
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