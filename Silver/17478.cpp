

//17478.cpp
//��մ� ����
//�� ������ Ǯ�鼭 ����Լ��� ���� �ٽ� �ѹ� ������ ���� �Ǿ���
//�����ϸ鼭 ������ ���� ������ �� ����!
//����Լ��� ������ �� �ִ� ���� for�� while�ε� ������ �� �ִ�
//���� �̰��� �׻� ���� ���� �ƴϰ�, �׻� ���� �͵� �ƴϴ�.
//�ѹ��� �����ؼ� �� ��� ���� ��������!



#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>



void PrintUnderbar(int N,int N_firstcall) {

	for (int i = 0; i < N_firstcall-N; i++)
		printf("____");
	
}


void ShowWhatIsRecursive(int N, int N_firstcall) {

	PrintUnderbar(N,N_firstcall);
	printf("\"����Լ��� ������?\"\n");

	if (N == 0) {
		PrintUnderbar(N,N_firstcall);
		printf("\"����Լ��� �ڱ� �ڽ��� ȣ���ϴ� �Լ����\"\n");
	}
	else {
		PrintUnderbar(N, N_firstcall);
		printf("\"�� ����. �������� �� �� ����⿡ �̼��� ��� ������ ����� ������ �־���.\n");
		PrintUnderbar(N, N_firstcall);
		printf("���� ������� ��� �� ���ο��� ������ ������ �߰�, ��� �����Ӱ� ����� �־���.\n");
		PrintUnderbar(N, N_firstcall);
		printf("���� ���� ��κ� �ǾҴٰ� �ϳ�. �׷��� ��� ��, �� ���ο��� �� ���� ã�ƿͼ� ������.\"\n");
		ShowWhatIsRecursive(N - 1, N_firstcall);
		 	
	};
	PrintUnderbar(N, N_firstcall);
	printf("��� �亯�Ͽ���.\n");
}

int main() {

	int N;

	scanf("%d", &N);
	
	printf("��� �� ��ǻ�Ͱ��а� �л��� ������ �������� ã�ư� ������.\n");
	ShowWhatIsRecursive(N,N);

	return 0;
}

