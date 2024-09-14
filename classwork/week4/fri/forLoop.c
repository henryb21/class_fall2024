#include<stdio.h>

int main(){
	int loop_variable = 0;
	int limit;
	scanf("Limit: %d", &limit);
	for(;loop_variable<limit;loop_variable++){
		printf("%d ", loop_variable);
	}
	return 0;
}
