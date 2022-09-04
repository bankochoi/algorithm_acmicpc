
//1316.py

// 개판으로 짰으니 참고하지 않는 것을 추천한다
// 
// 기본적인 알고리즘은
// 입력된 문자열을 스택에 모두 push한다.
// 맨 위의 문자를 pop 한다. 스택의 top이 현재 문자와 다른 문자가 나올 때 까지 전부 pop한다.
// 현재 문자가 set에 없다면 추가한다. set에 이미 있다면 이 문자열은 그룹 단어가 아니다
// 이 과정을 끝까지 거쳐서 '그룹 단어가 아니다' 라고 판별되지 않았다면 이 단어는 그룹단어이다.

// 인데, 나는 stack을 include 하지 않고 그냥 str으로 받아서 index를 하나씩 옮겨가며 테스트 했는데,
// 발생할 수 있는 예외 상황에 대해 일일이 if문을 만들어 처리했으므로, 논리가 굉장히 ambiguous해졌다.
// 따라서 이 문제에 대해서는 참고하지 않는 것을 추천한다 .. 죄송하다


#define _CRT_SECURE_NO_WARNINGS

#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <set>


int main() {

	int N;
	int result = 0;
	int isgroup;



	scanf("%d", &N);

	for (int i = 0; i < N; i++) {

		std::string str;

		std::cin >> str;

		std::set<char> used;

		// 단어의 맨 앞 글자부터 시작하여
		// 다음 글자가 현재 글자와 같은 글자면 index 증가;
		// 다음 글자가 현재 글자와 다른 글자면 set에 현재 글자 추가 후 index 증가;
		isgroup = 1;

		if (str.length() < 3) {
			result++; continue;
		}

		for (int j = 0; j < str.length() - 1; j++) {

			if (used.count(str[j])) {
				isgroup = 0;
				break;
			}

			used.insert(str[j]);

			while (str[j] == str[j + 1]) {
				j++;
				continue;
			}
		}


		if (str[str.length() - 1] != str[str.length() - 2] && used.count(str[str.length() - 1]))
			isgroup = 0;

		if (isgroup) result++;
																								
	}


	printf("%d", result);


	return 0;
}




