#include <stdio.h>
#include <string.h>
#include "utils.h"

void menu() {
	printf("~~Welcome to the county database!\n");
	printf("~~To search for a county by seat, press 1.\n");
	printf("~~To search for counties in a population range, press 2.\n");
	printf("~~To exit, press any other key.\n");
}

County* find_seat(County counties[], int count, char seat[]) {
	for (int i = 0; i < count; i++) {
		if (strcmp(counties[i].seat, seat) == 0) {
			return &counties[i];
		}
	}
	return NULL;
}

void find_range(County counties[], int count, int upperbound, int lowerbound) {
	printf("The counties with populations between %d and %d are:\n", lowerbound, upperbound);
	for (int i = 0; i < count; i++) {
		if (counties[i].pop >= lowerbound && counties[i].pop <= upperbound) {
			printf("%s, pop. %d\n", counties[i].name, counties[i].pop);
		}	
	}
}
