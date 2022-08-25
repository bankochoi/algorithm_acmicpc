/*


//#11729 : 하노이 탑 이동 순서
// 재귀함수로 해결할 수 있는 문제
// 하노이의 탑을 최소 이동횟수로 1->3 으로 옮기는 법은,
// 맨 아래 가장 큰 블럭을 제외한 나머지를 2로 옮기는 것이고, 이는 다시 그중 가장 아래 블럭을 제외한 나머지를 3에 옮기는 것이다.
// 전역변수를 사용하여 처음에 함수를 call 할때의 N 값을 기억하는 것도 괜찮지만,
// 가급적 전역변수를 선언하고싶지 않아서 함수의 input으로 N_initial을 계속 전달했다. 
// 이게 좋은 방법인지는 모르겠다. 전역변수를 선언하여 한번 더 풀어보자
// 봉을 클래스로 정의하고 스택을 만들어서 풀 수도 있을 것 같다




#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>


void Hanoi(int N, int N_initial, int* cnt) {

	

	if (N == 1) {
		



		cnt* ++;

	}


	return Hanoi(N - 1, N_initial);
}



int main() {

	int N;
	int* cnt = 0;


	scanf("%d", &N);


	Hanoi(N, N, cnt);




	return 0;

}



*/

