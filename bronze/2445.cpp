

#include <iostream>


int main() {

	int N;
	

	scanf_s("%d",&N);
	
	for (int i = 1; i <= N; i++)
	{
		for (int j = 0; j < i; j++)
			printf("*");

		for (int k = 2 * (N - i); k >0; k--)
			printf(" ");

		for (int j = 0; j < i; j++)
			printf("*");

		printf("\n");
	}

	for (int i= N-1; i>0 ; i--)
	{
		for (int j = 0; j < i; j++)
			printf("*");

		for (int k = 2 * (N - i); k >0 ; k--)
			printf(" ");
		
		for (int j = 0; j < i; j++)
			printf("*");
		printf("\n");
	}


}
