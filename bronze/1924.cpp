



#include <iostream>
#include <string>




int main() {

	int month, day;
	int date_each_month[12] = { 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31 };
	int dates_from_0101 = 0;

	std::string days[7] = { "MON", "TUE", "WED", "THU", "FRI", "SAT", "SUN" };


	std::cin >> month >> day;


	for (int i = month - 2; i >= 0; i--)
		dates_from_0101 += date_each_month[i];


	dates_from_0101 += day - 1;

	std::cout << days[dates_from_0101 % 7];

	return 0;

}

