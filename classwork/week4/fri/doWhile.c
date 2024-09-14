#include<stdio.h>

int main() {
	int status;
	int num;
	printf("Read a number: ");
	scanf("%d", &num);
	do{
		status = scanf("%d", &num);
	}while(status > 0&&num%2 != 0);

	return 0;
}
