



#include <iostream>




int main() {


	int iNumOfPieces[6] = { 1, 1, 2, 2, 2 ,8 };
	int temp;

	for (int i = 0; i < 6; i++)
	{
		std::cin >> temp;

		iNumOfPieces[i] = (iNumOfPieces[i] - temp);
	}

	for (int i = 0; i < 6; i++)
		std::cout << iNumOfPieces[i] << " ";


	return 0;
}




