



// 세자리 수 두개를 str으로 입력받고 순서를 반대로 뒤집는다
// str을 int로 형변환 한 후, 숫자의 크기를 비교한다
// 둘중 큰 쪽을 출력한다 가 쉽겠지만, (특히 파이썬 같이 str을 쉽게 다루는 언어의 경우)
// char -> int 형변환 등의 작업이 귀찮을 것 같아서,
// 그냥 애초에 int 를 입력을 받고, 순서를 뒤집었다.
// 몇자리 수 인지가 정해져있고, 3자리밖에 안되는 수라서
// 뒤집는 과정이 굳이 다른 함수를 쓸 필요가 없을만큼 쉽기 때문에
// 이 방법이 더 간단할 것으로 생각했다.

#include <iostream>

int main() {

	int num1;
	int num2;
	int temp1, temp2, temp3;

	scanf_s("%d %d", &num1, &num2);

	//num1 과 num2를 각각 뒤집어준다
	temp1 = num1 % 10;// num1의 일의 자리수
	temp2 = (num1 / 10) % 10; // num1의 십의 자리수
	temp3 = num1 / 100;// num1의 백의 자리수

	num1 = temp3 + temp2 * 10 + temp1 * 100;

	temp1 = num2 % 10;// num1의 일의 자리수
	temp2 = (num2 / 10) % 10; // num1의 십의 자리수
	temp3 = num2 / 100;// num1의 백의 자리수

	num2 = temp3 + temp2 * 10 + temp1 * 100;

	if (num1 < num2) printf("%d", num2);
	else printf("%d", num1);

	return 0;
}



