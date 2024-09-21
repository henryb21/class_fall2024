#include <stdio.h>

int main() {

	char input1;
	char input2;
	char min_char;

	printf("Enter two characters: ");
	scanf(" %c %c", &input1, &input2);
	
	min_char = (input1 > input2) ? input2 : input1;

	printf("Min is %c\n", min_char);

	return 0;
}

