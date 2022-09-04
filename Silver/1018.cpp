
// #1018 : 체스판 다시 칠하기
// 
// 
// 무식한 방법을 이용해 주어진 M*N 체스판을 8 X 8의 체스판으로 만든다
// 2차월 배열을 이용하여 가로 8칸 세로 8칸에서 W와 B가 계속 번갈아 나오려면
// 몇 칸을 바꿔야 하는지 구한다.
//  8 X 8 짜리 체스판을 주어진 자르기 전의 체스판의 가로 끝까지 이동시키며 아래의 loop를 돈다
//  가로 끝에 도달하면 다름 행부터 다시 가로 끝까지
//  그렇게 마지막 행이 끝에 닿을 때 까지 반복
// loop 1 : 8행
// loop 2 : 한 행의 8개 요소 (8열)를 하나씩 탐색
// 이 방법 보다는 WBWB / BWBW 인 8 x 8 2차원 어레이를 생성하여 그것과 다른 문자의 개수를 비교하는 것이
// 더 현명할 듯 하다

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
	// M X N, 2차원 행렬을 포인터로 생성

	for (int i = 0 ; i < M ; i++){
		scanf("%s", arr[i]);
	}




	results = (int*)(malloc(sizeof(int) * ( M - 8 + 1) * ( N -8 + 1)));
	// 주어진 원본 체스판에서 8 X 8 정식 체스판을 만들기 위해 
	// 고쳐야하는 칸의 개수를 저장하는 어레이를 선언


	for (int start_row = 0; start_row < M - 8 +1 ; start_row++) {

		for (int start_col = 0; start_col < N - 8 +1; start_col++) {

			correction1 = 0;
			correction2 = 0;

			for (int i = 0; i < 8; i++) {

				for (int j=0; j < 8; j++){
				
					// 왼쪽 위가 W인 체스판을 만드는 경우
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
						
					// 왼쪽 위가 B인 체스판을 만드는 경우
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
