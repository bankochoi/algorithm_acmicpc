


//2941.cpp
// !!���� ���ϰ� �� ¥�� �����ⰰ�� ����!!

//Ư���� ũ�ξ�Ƽ�� ���ĺ��� �з��ϸ�
//���ĺ� �ڿ� =�� ���� ���, -�� ���� ���, j�� ���� ���� ���� �� �ִ�.
// if - else if ���� ����Ͽ� ������ �б⸦ ������ش�
// �̶� ���� ���� �ϳ��� ���(dz=) �� �����ϸ� ��� �ΰ��̴�.
// ���ڼ��� ������ ���� ���� if���� ������ش�
// �̷� Ư���� ��츦 �����ϸ� �ѱ���¥�� ����� ���ĺ��̹Ƿ�, cnt�� 1 �÷��ְ�, index�� 1 ���� ��Ų��

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
					cnt--; //z=�� ��� dz= ���ٸ� d�� ���� �ȵǹǷ� �ϳ� ����
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

