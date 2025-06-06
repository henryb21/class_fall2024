#include <stdio.h>
#include <string.h>
#define MAX_STRING_LENGTH 499
#define MAX_STRING_COUNT 100

typedef struct {
	char name[20];
	char seat[19];
	int pop;

}County;

int main() {
	FILE *in;
	FILE *out;
	char strings[MAX_STRING_COUNT][MAX_STRING_LENGTH];
	int count = 0;

	in = fopen("/public/labs/lab7/counties1.txt", "r");
	if(!in){
		printf("Failed to open counties1.txt");
		fclose(in);
		return 1;
	}
	while(count<100 && fgets(strings[count], MAX_STRING_LENGTH, in)){
		count++;		
	}

	fclose(in);
	
	printf("Before sorting, arr of strings is\n");
	for(int i=0;i<count;i++) {
		printf("%s\n ", strings[i]);
	}

	printf("\n");

	printf("Now performing selection sort:\n");

	for(int fill=0;fill<count-1; fill++) {
		int index_of_min = fill;
		for(int i = fill + 1; i<count; i++){
			if(strcmp(strings[i], strings[index_of_min]) < 0){
				index_of_min = i;
			}
		}

		if(index_of_min != fill) {
			char tmp[MAX_STRING_LENGTH];
			strcpy(tmp, strings[fill]);
			strcpy(strings[fill], strings[index_of_min]);
			strcpy(strings[index_of_min], tmp);
		}
	}

	printf("Final sorted array of strings:\n");
	    	for (int i = 0; i < count; i++) {
			printf("%s\n", strings[i]);
		}

	out = fopen("outdata_strings.txt", "w");
	if(!out){
		printf("Failed to open outdata_strings.txt!");
		fclose(out);
		return 1;
	}

	for(int i=0;i<count; i++){
		char *name, *seat, *population;
		name = strtok(strings[i], "|");
		seat = strtok(NULL, "|");
		strtok(NULL, "|");
		strtok(NULL, "|");
		population = strtok(NULL, "|");
		fprintf(out, "%s has population %s and seat %s\n", name, population, seat);
		printf("%s has population %s and seat %s\n", name, population, seat);
	}
	
	fclose(out);


	return 0;
}
