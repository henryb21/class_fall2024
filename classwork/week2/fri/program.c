#include<stdio.h>
#define num_students 75
int main(){
	double radius;
	char ch;
	int num_credits;

	scanf("%c", &ch);
	scanf("%d", &num_credits);
	scanf("%lf", &radius);
	
	printf("the character you read is: %c\n", ch);
	printf("the integer you read is: %d\n", num_credits);
	printf("the double precision you read is: %f\n", radius);
	int total_credits = num_students * num_credits;
	printf("%d\n", total_credits);
	int divisor;
	int dividend;
	scanf("%d", &divisor);
	scanf("%d", &dividend);
	int result = (divisor / dividend);
	printf("the result=%d\n", result);

	return 0;
}
