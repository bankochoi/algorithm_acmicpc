

//1011
// HARD!!!
// 
// ���� ������ ��Ģ���� ���� ���캼 �ʿ䰡 �ִ�.
// k_n = k_(n-1) - 1 or k_(n-1) or k_(n-1) + 1 �̰�,
// k_1 = 1, k(m) = 1 �̴�.  (m�� ������ ��)
// ���� �� ������ ������ �Ÿ��� ���
// 1 + 2 + 3 + 2 + 1 �� ���� 1�� ���� / ���� �ϴ� ���������� ���� �Ÿ��� �Ǵ� ��� ��,
// n(n+1)/2 + (n-1)n/2 �� ��, �� n^2 �� �Ÿ� y-x �� ����̴�.
// (1, 2, 3, 2, 1 ) �� �� �ٵϵ��� ���´ٰ� �����غ���. ���簢���� ���������. �̶� ���簢�� �� ���� ���̴�
// ������ ���� ū ������ 3�̴�
// �̷��� �������� ���� 2 * sqrt(y-x) + 1 �� ���� ���� ��������.

// �׷��� ���� ���� ��� �ɱ� ������ �غ���,
// ���� ��ư� ������ �ʿ䰡 ����. �����Ͽ� �ӵ��� ���̸� 
// �ݵ�� �� �ӵ����� 1 ���� �ӵ��� �̵��� ���� �յڷ� �Ϸ羿 �����Ѵ�.
// �ᱹ �ռ� ������� 1+ 2 + 3 + 4 + 3 + 2 + 1 �� ���� ������ ���� �� �ְ�,
// ���� ������ �׳� �����̳� �����ϴ� �߰��� ä��� �ȴ�.
// ���� ���ĸ� ���� ���
// �Ÿ��� 45��� �غ���. 45���� �۰ų� �����鼭 ���� ū �������� 36�̰�,
// 45 - 36 = 9�̴�. 36�� 6�� �������̹Ƿ� 1 + 2 + 3 + 4 + 5 + 6 + 5 + 4 + 3 + 2 + 1 �� ���̸�,
// (�ӵ��� 7�� �Ǿ������ ���� 49�� �Ǿ�����Ƿ� �ʰ�, �ӵ��� 6���� ������ �� �ִ�.)

// ���� 9���� 4���� �۰ų� ���� ���� ������ �󸶵��� ��Ÿ�� �� �ִ� ( 9 = 6 + 3 , 5 + 4)
// �̰��� ���� �� ���� ���������� �ڸ��ϴٰ� �����Ͽ� �ڵ�� �����Ͽ���

#include <stdio.h>
#include <math.h>
#include <stdlib.h>

int getDay(int x, int y) {
	
	int distance;
	int togo;
	int maxSpeed;
	int day;
	int i;

	distance = y - x;

	maxSpeed = sqrt(distance);

	togo = distance - maxSpeed * maxSpeed;
	// ���� �Ÿ�

	day = 2 * maxSpeed - 1;
	i = maxSpeed; 

	while (togo != 0) {
		
		togo -= i; 
		// ���� �� �ִ� �ִ��� �ӵ����� ������
		// �̶� ���� �Ÿ��� ������ �Ǹ� i�� 1 ���ҽ�Ű�� �ٽ� ������
		if (togo < 0) {
			togo += i;
			i--;
			continue;
		}

		day++;
	}

	return day;
}


int main() {

	int T;

	int x, y;
	int *arr;

	scanf_s("%d", &T);

	arr = (int*)malloc(sizeof(int)*T);

	for (int i = 0; i < T; i++) {

		scanf_s("%d %d", &x, &y);
		arr[i] = getDay(x, y);
	}


	for (int i = 0; i < T; i++) {
		
		printf("%d\n", arr[i]);
	}

	free(arr);
	
	return 0;
}



