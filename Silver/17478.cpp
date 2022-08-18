

//17478.cpp
//재밌는 문제
//이 문제를 풀면서 재귀함수에 대해 다시 한번 생각해 보게 되었다
//간단하면서 유쾌한 좋은 문제인 것 같음!
//재귀함수로 구현할 수 있는 것은 for나 while로도 구현할 수 있다
//물론 이것이 항상 좋은 것은 아니고, 항상 나쁜 것도 아니다.
//한번에 성공해서 더 기분 좋게 제출했음!



#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



void PrintUnderbar(int N,int N_firstcall) {

	for (int i = 0; i < N_firstcall-N; i++)
		printf("____");
	
}


void ShowWhatIsRecursive(int N, int N_firstcall) {

	PrintUnderbar(N,N_firstcall);
	printf("\"재귀함수가 뭔가요?\"\n");

	if (N == 0) {
		PrintUnderbar(N,N_firstcall);
		printf("\"재귀함수는 자기 자신을 호출하는 함수라네\"\n");
	}
	else {
		PrintUnderbar(N, N_firstcall);
		printf("\"잘 들어보게. 옛날옛날 한 산 꼭대기에 이세상 모든 지식을 통달한 선인이 있었어.\n");
		PrintUnderbar(N, N_firstcall);
		printf("마을 사람들은 모두 그 선인에게 수많은 질문을 했고, 모두 지혜롭게 대답해 주었지.\n");
		PrintUnderbar(N, N_firstcall);
		printf("그의 답은 대부분 옳았다고 하네. 그런데 어느 날, 그 선인에게 한 선비가 찾아와서 물었어.\"\n");
		ShowWhatIsRecursive(N - 1, N_firstcall);
		 	
	};
	PrintUnderbar(N, N_firstcall);
	printf("라고 답변하였지.\n");
}

int main() {

	int N;

	scanf("%d", &N);
	
	printf("어느 한 컴퓨터공학과 학생이 유명한 교수님을 찾아가 물었다.\n");
	ShowWhatIsRecursive(N,N);

	return 0;
}

