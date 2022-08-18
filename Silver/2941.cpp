


//2941.cpp
// !!생각 안하고 막 짜서 쓰레기같음 주의!!

//특수한 크로아티아 알파벳을 분류하면
//알파벳 뒤에 =가 오는 경우, -가 오는 경우, j가 오는 경우로 나눌 수 있다.
// if - else if 문을 사용하여 세가지 분기를 만들어준다
// 이때 글자 수는 하나의 경우(dz=) 를 제외하면 모두 두개이다.
// 글자수가 세개인 경우는 따로 if문을 만들어준다
// 이런 특수한 경우를 제외하면 한글자짜리 평범한 알파벳이므로, cnt를 1 늘려주고, index를 1 증가 시킨다

#define _CRT_SECURE_NO_WARNINGS

#include<stdio.h>
#include<stdlib.h>


int main() {

	char* str = (char*)(malloc(sizeof(char)*103));
	int i = 0;
	int cnt = 0;

	scanf("%s", str);

	while (str[i] != '\0') {
		if (str[i + 1] == '=')
		{
			if (str[i] == 'c') {
				cnt++; i+=2; continue;
			}
			else if (str[i] == 'z') {
				cnt++;
				if (i > 0 && str[i - 1] == 'd')
				{
					cnt--; //z=가 사실 dz= 였다면 d는 세면 안되므로 하나 뺀다
				}
				i += 2;
				continue;
			}
			else if (str[i] == 's') {
				cnt++; i+=2; continue;
			}
		}
		else if (str[i + 1] == '-')
		{
		
			if (str[i] == 'c') {
				cnt++; i+=2; continue;
			}				
			if (str[i] == 'd') {
				cnt++; i+=2; continue;
			}
			
		}
		else if (str[i + 1] == 'j')
		{
			if (str[i] == 'l') {
				cnt++; i+=2; continue;
			}
			if (str[i] == 'n') {
				cnt++; i+=2; continue;
			}
		}
		cnt++;
		i++;
	}
	
printf("%d", cnt);

	return 0;

}

