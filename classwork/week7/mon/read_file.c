#include <stdio.h>

int main(){
	FILE *in;
	FILE *out;
	double doubles[5];

	in = fopen("/public/classwork/week7/mon/input.txt", "r");
	if(!in){
		printf("Failed to open input.txt!\n");
		fclose(in);
		return 1;
	}
	for(int i=0; i<5; i++) {
		fscanf(in, "%lf", &doubles[i]);
	}

	fclose(in);

	out = fopen("output.txt", "w");

	if(!out) {
		printf("Failed to open output.txt");
		return 1;
	}

	for(int i=0;i<5;i++) {
		fprintf(out, "%.2lf\n", doubles[i]);
	}

	fclose(out);
	return(0);
}
