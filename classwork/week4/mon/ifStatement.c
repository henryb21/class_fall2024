#include<stdio.h>

int main() {
	int heart_rate;
	printf("Read a heart rate that was tested for 12 seconds");
	scanf("%d", &heart_rate);
	int scale_heart_rate = 5*heart_rate;

	if(scale_heart_rate > 75){
		printf("Have more exercises");
	}else{
		printf("You are in good health");
	}
	return 0;
}

