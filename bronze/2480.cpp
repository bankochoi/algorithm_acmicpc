

#include <iostream>



int main() {

	int nums[3];
	int max;

	scanf_s("%d %d %d", &nums[0], &nums[1], &nums[2]);

	if (nums[0] == nums[1]){
		if (nums[1] == nums[2]){ 
			// 세 수 모두 같은 경우
			printf("%d", 10000 + 1000 * nums[0]);
		}
		else {
			// 두 수가 같은 경우
			printf("%d", 1000 + 100 * nums[0]);
		}
	}
	else if (nums[1] == nums[2]) {
		// 두 수가 같은 경우
		printf("%d", 1000 + 100 * nums[1]);
	}

	else if (nums[0] == nums[2]) {
		// 두 수가 같은 경우
		printf("%d", 1000 + 100 * nums[0]);
	}
	else {
		max = nums[0];
		if (max < nums[1]) max = nums[1];
		if (max < nums[2]) max = nums[2];

		printf("%d", 100 * max);
	
	}
	

	return 0;
}


