

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
				cnt++; i++; continue;
			}
			else if (str[i] == 'z') {
				cnt++; i++; continue;
			}
			else if (str[i] == 's') {
				cnt++; i++; continue;
			}
		}
		else if (str[i + 1] == '-')
		{
			if (str[i] == '-') {
				cnt++; i++; continue;
			}
			{
				if (str[i] == 'c') {
					cnt++; i++; continue;
				}
				if (str[i] == 'd') {
					cnt++; i++; continue;
				}
			}
		}
		else if (str[i + 1] == 'j')
		{
			if (str[i] == 'l') {
				cnt++; i++; continue;
			}
			if (str[i] == 'n') {
				cnt++; i++; continue;
			}
		}
		cnt++;
		i++;
	}
	
printf("%d", cnt);

	return 0;

}


