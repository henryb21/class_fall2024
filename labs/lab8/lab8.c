#include <stdio.h>
#include <string.h>
#define MAX_STRING_LENGTH 499
#define MAX_STRING_COUNT 100

typedef struct {
	char name[100];
	char seat[25];
	int pop;

}County;

County add_county(char name[100], char seat[25], int pop){
	County new_county;

	strncpy(new_county.name, name, sizeof(new_county.name) - 1);
	new_county.name[sizeof(new_county.name) - 1] = '\0';
	strncpy(new_county.seat, seat, sizeof(new_county.seat) - 1);
	new_county.seat[sizeof(new_county.seat) - 1] = '\0';
	new_county.pop = pop;
	
	return new_county;
}

County* search_by_seat(County counties[], int count, char comparison[]){
	for(int i=0;i<count;i++){
		if(strcmp(counties[i].seat, comparison) == 0){
			return &counties[i];
		}
	}
	return NULL;
}

void search_by_bounds(County counties[], int count, int upperbound, int lowerbound) {
	printf("The counties with populations between %d and %d are:\n", upperbound, lowerbound);
	        
	for (int i = 0; i < count; i++) {
		if (counties[i].pop >= lowerbound && counties[i].pop <= upperbound) {
			printf("%s, pop. %d\n", 
			counties[i].name, counties[i].pop);
		}
	}
}

int main() {
	FILE *in;
	char strings[MAX_STRING_COUNT][MAX_STRING_LENGTH];
	char input[100];
	char search[100];
	int count = 0;
	County counties[MAX_STRING_COUNT];

	in = fopen("/public/labs/lab8/counties1.txt", "r");
	if(!in){
		printf("Failed to open counties1.txt");
		fclose(in);
		return 1;
	}
	while(count<100 && fgets(strings[count], MAX_STRING_LENGTH, in)){
		count++;		
	}

	fclose(in);

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

	for(int i=0;i<count; i++){
		char *name_string, *seat_string, *population_string;
		int population_int;
		name_string = strtok(strings[i], "|");
		seat_string = strtok(NULL, "|");
		strtok(NULL, "|");
		strtok(NULL, "|");
		population_string = strtok(NULL, "|");
		sscanf(population_string, "%d", &population_int);
		counties[i] = add_county(name_string, seat_string, population_int);
	}
	
	while(1) {
		printf("~~Welcome to the county database!\n");
		printf("~~To search for a county by seat, press 1.\n");
		printf("~~To search for counties in a population range, press 2.\n");
		printf("~~To exit, press any other key.\n");

		if(scanf("%s", input) != 1){
			break;	
		}	
		if(strcmp(input, "1") == 0){
			printf("Enter a county to search for: ");
			scanf("%s", search);
			County* result = search_by_seat(counties, count, search);
			if(result != NULL){
				printf("%s has seat %s\n", result->name, result->seat);
			} else {
				printf("Input not found");
			}
		}
		else if(strcmp(input, "2") == 0) {
			int upperbound, lowerbound;
			printf("Enter an upper bound for the population (inclusive): ");
			scanf("%d", &upperbound);
			printf("Enter a lower bound for the population (inclusive): ");
			scanf("%d", &lowerbound);
			search_by_bounds(counties, count, upperbound, lowerbound);
		}
		else{
			break;
		}
	}

	return 0;
}
