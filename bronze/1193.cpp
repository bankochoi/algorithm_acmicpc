


// #1193
// 주어진 수 X가 몇번째 대각선에 속하는지 계산한다.
// X - 1 - 2 - 3 - ...  의 결과가 음수가 되기까지
// 뺄셈을 몇번 해야하는지를 정수 i에 저장한다.
// 이때 X는 i번째 대각선에 위치한다. 
// i-1 번째 대각선의 끝까지 수의 개수를 세면
// sigma1toi-1 = 1 + 2 + 3 + ... + N - 1 이고,
// X는 cnt번째 대각선의 X - (sigma) 번째 수이다. 
// i가 홀수일 경우 왼쪽 아래부터 순서를 세고,
// i가 짝수일 경우 오른쪽 아래부터 순서를 센다.


#include <iostream>


int main() {

	int X;
	int Y;
	int N;
	int sigma=0;
	int i=0;
	

	scanf_s("%d", &X);
	Y = X;

	while (Y > 0) {

		i++;
		Y -= i;

	}

	for (int j = 1; j < i; j++) // 1 ~ i-1 까지 숫자를 더함
		sigma += j;

	N = X - sigma; // X는 i번째 대각선의 N번째 수

	if (i % 2 == 0)
		printf("%d/%d", N, i - N+1);
	else
		printf("%d/%d", i - N+1, N);


}

