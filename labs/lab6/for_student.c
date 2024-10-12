#include <stdio.h>

//void order_by_value(int a, int b) {}

void order_by_ref(int* a, int* b) {
	
}

int main() {
	int num1 = 10, num2 = 5;
	printf("%p: %d\n%p: %d\n", &num1, num1, &num2, num2);
	
	order_by_value(num1, num2);
	printf("%p: %d\n%p: %d\n", &num1, num1, &num2, num2);

	order_by_ref(&num1, &num2);
	printf("%p: %d\n%p: %d\n", &num1, num1, &num2, num2);

	//printf("%d %d\n", num1, num2);

	return 0;
}
