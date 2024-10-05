#include <stdio.h>

int main() {
	FILE *in;
	FILE *out;
	double doubles[100];
	int count = 0;

	in = fopen("/public/labs/lab6/numbers.txt", "r");
	if(!in){
		printf("Failed to open numbers.txt");
		fclose(in);
		return 1;
	}
	while(count<100 && fscanf(in, "%lf", &doubles[count]) == 1){
		count++;		
	}

	fclose(in);
	
	printf("Before sorting, arr of numbers is\n");
	for(int i=0;i<count;i++) {
		printf("%.2lf ", doubles[i]);
	}

	printf("\n");

	printf("Now performing selection sort:\n");

	for(int fill=0;fill<count-1; fill++) {
		int index_of_min = fill;
		for(int i = fill + 1; i<count; i++){
			if(doubles[i] < doubles[index_of_min]){
				index_of_min = i;
			}
		}

		if(index_of_min != fill) {
			double tmp = doubles[fill];
			doubles[fill] = doubles[index_of_min];
			doubles[index_of_min] = tmp; 
		}
		for(int i=0;i<count;i++) {
			printf("%.2lf ", doubles[i]);
		}
		printf("\n");
	}
	
	out = fopen("outdata.txt", "w");
	if(!out){
		printf("Failed to open outdata.txt!");
		fclose(out);
		return 1;
	}

	for(int i=0;i<count; i++){
		fprintf(out, "%.2lf\n", doubles[i]);
	}
	
	fclose(out);


	return 0;
}
