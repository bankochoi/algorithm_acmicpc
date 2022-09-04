
// #1018 : ü���� �ٽ� ĥ�ϱ�
// 
// 
// ������ ����� �̿��� �־��� M*N ü������ 8 X 8�� ü�������� �����
// 2���� �迭�� �̿��Ͽ� ���� 8ĭ ���� 8ĭ���� W�� B�� ��� ������ ��������
// �� ĭ�� �ٲ�� �ϴ��� ���Ѵ�.
//  8 X 8 ¥�� ü������ �־��� �ڸ��� ���� ü������ ���� ������ �̵���Ű�� �Ʒ��� loop�� ����
//  ���� ���� �����ϸ� �ٸ� ����� �ٽ� ���� ������
//  �׷��� ������ ���� ���� ���� �� ���� �ݺ�
// loop 1 : 8��
// loop 2 : �� ���� 8�� ��� (8��)�� �ϳ��� Ž��
// �� ��� ���ٴ� WBWB / BWBW �� 8 x 8 2���� ��̸� �����Ͽ� �װͰ� �ٸ� ������ ������ ���ϴ� ����
// �� ������ �� �ϴ�

#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>



int main() {

	int M, N; // M X N 
	int correction1, correction2;
	int* results;
	int index=0;


	scanf("%d %d", &M, &N);

	char** arr = (char**)(malloc(sizeof(char*) * M));

	for (int i=0; i < M; i++) {
		arr[i] = (char*)(malloc(sizeof(char) * N));
	}
	// M X N, 2���� ����� �����ͷ� ����

	for (int i = 0 ; i < M ; i++){
		scanf("%s", arr[i]);
	}




	results = (int*)(malloc(sizeof(int) * ( M - 8 + 1) * ( N -8 + 1)));
	// �־��� ���� ü���ǿ��� 8 X 8 ���� ü������ ����� ���� 
	// ���ľ��ϴ� ĭ�� ������ �����ϴ� ��̸� ����


	for (int start_row = 0; start_row < M - 8 +1 ; start_row++) {

		for (int start_col = 0; start_col < N - 8 +1; start_col++) {

			correction1 = 0;
			correction2 = 0;

			for (int i = 0; i < 8; i++) {

				for (int j=0; j < 8; j++){
				
					// ���� ���� W�� ü������ ����� ���
					if (((start_row + i) + (start_col + j)) % 2 == 0) {
						
						if (arr[start_row + i][start_col + j] == 'W') {
							;
						}
						else if (arr[start_row + i][start_col + j] == 'B') {
							correction1++;
						}
					}
					else if (((start_row + i) + (start_col + j)) % 2 == 1) {
							
						if (arr[start_row + i][start_col + j] == 'B') {
							;
						}
						else if (arr[start_row + i][start_col + j] == 'W') {
							correction1++;
						}

					}
						
					// ���� ���� B�� ü������ ����� ���
					if (((start_row + i) + (start_col + j)) % 2 == 0) {

						if (arr[start_row + i][start_col + j] == 'B') {
							;
						}
						else if (arr[start_row + i][start_col + j] == 'W') {
							correction2++;
						}
					}

					else if (((start_row + i) + (start_col + j)) % 2 == 1) {

						if (arr[start_row + i][start_col + j] == 'W') {
							;
						}
						else if (arr[start_row + i][start_col + j] == 'B') {
							correction2++;
						}

					}
					

				}
			}
			if (correction1 < correction2)
				results[index] = correction1;

			else results[index] = correction2;

			index++;
		}
	}



	int min = 9999;

	for (int i = 0; i < ( M - 8 + 1) * ( N - 8 + 1); i++) {
		if (results[i] < min) {

			min = results[i];

		}
	}

	printf("%d", min);



	return 0;
}
