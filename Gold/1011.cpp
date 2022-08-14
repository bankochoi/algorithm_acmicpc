

//1011
// HARD!!!
// 
// 먼저 수열의 규칙성에 대해 살펴볼 필요가 있다.
// k_n = k_(n-1) - 1 or k_(n-1) or k_(n-1) + 1 이고,
// k_1 = 1, k(m) = 1 이다.  (m은 마지막 날)
// 먼저 든 생각은 최적의 거리인 경우
// 1 + 2 + 3 + 2 + 1 과 같이 1씩 증가 / 감소 하는 등차수열의 합이 거리가 되는 경우 즉,
// n(n+1)/2 + (n-1)n/2 의 합, 즉 n^2 이 거리 y-x 인 경우이다.
// (1, 2, 3, 2, 1 ) 개 씩 바둑돌을 놓는다고 생각해보자. 정사각형이 만들어진다. 이때 정사각형 한 변의 길이는
// 수열의 가장 큰 숫자인 3이다
// 이렇게 제곱수인 경우는 2 * sqrt(y-x) + 1 로 답이 쉽게 구해진다.

// 그렇지 않은 경우는 어떻게 될까 생각을 해보니,
// 굳이 어렵게 생각할 필요가 없다. 가속하여 속도를 높이면 
// 반드시 그 속도보다 1 작은 속도로 이동한 날이 앞뒤로 하루씩 존재한다.
// 결국 앞서 만들었던 1+ 2 + 3 + 4 + 3 + 2 + 1 과 같은 수열을 만들 수 있고,
// 남는 날들은 그냥 가속이나 감속하는 중간에 채우면 된다.
// 무슨 얘기냐면 예를 들어
// 거리가 45라고 해보자. 45보다 작거나 같으면서 가장 큰 제곱수는 36이고,
// 45 - 36 = 9이다. 36은 6의 제곱수이므로 1 + 2 + 3 + 4 + 5 + 6 + 5 + 4 + 3 + 2 + 1 의 합이며,
// (속도가 7이 되어버리면 합이 49가 되어버리므로 초과, 속도는 6까지 증가할 수 있다.)

// 남은 9일은 4보다 작거나 같은 수의 합으로 얼마든지 나타낼 수 있다 ( 9 = 6 + 3 , 5 + 4)
// 이것이 최적 해 임이 직관적으로 자명하다고 생각하여 코드로 구현하였다

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
	// 남은 거리

	day = 2 * maxSpeed - 1;
	i = maxSpeed; 

	while (togo != 0) {
		
		togo -= i; 
		// 가질 수 있는 최대의 속도부터 빼본다
		// 이때 남은 거리가 음수가 되면 i를 1 감소시키고 다시 빼본다
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




