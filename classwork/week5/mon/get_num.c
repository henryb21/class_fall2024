#include<stdio.h>
	
int main() {
	int status;
	double num;

	do {
		status = 0;
		num = 0;
		printf("Enter a number outside of 0 and 100: (decimals okay): ");
		status = scanf("%le", &num);

		if(status != 1) {
			printf("You didn't enter a number\n");
			return 1;
		}
	} while((num > 0 && num < 100) || status != 1);
	printf("You entered %.2f\n", num);
	return 0;
}
