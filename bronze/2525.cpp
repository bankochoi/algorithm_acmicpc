


//2525.cpp

// INPUT
// Line1 : Current time "HH MM"  
// Line2 : Duration "MM" 

// OUTPUT
// End time "HH MM"

// Solution : add Duration to MM of Current time and get remainder R and quotient Q of devided by 60.
// add Q to HH of current time, and current MM = Remainder 
// when HH overflow ( HH is larger than 24), need to subtract 24. That is, HH = HH % 24

#include <iostream>


int main() {

	int CurrentTime_HH;
	int CurrentTime_MM;
	int Duration;
	

	std::cin >> CurrentTime_HH >> CurrentTime_MM;
	std::cin >> Duration;

	std::cout << (CurrentTime_HH + (CurrentTime_MM + Duration) / 60) % 24 << " " << ((CurrentTime_MM + Duration) % 60);



	return 0;
}


