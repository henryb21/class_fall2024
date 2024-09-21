#include<stdio.h>

int main() {
	int num[5];
	printf("Enter five numbers, sperated by spaces: \n");
	for(int i=0; i<5; i++){
		scanf("%d", &num[i]);
	}
	for(int i=0; i<5; i++){
		printf("%d\n", num[i]);
	}
	return 0;
}
