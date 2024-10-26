#include "county.h"

County add_county(char name[100], char seat[25], int pop) {
	County new_county;
	strncpy(new_county.name, name, sizeof(new_county.name) - 1);
	new_county.name[sizeof(new_county.name) - 1] = '\0';
	strncpy(new_county.seat, seat, sizeof(new_county.seat) - 1);
	new_county.seat[sizeof(new_county.seat) - 1] = '\0';
	new_county.pop = pop;
	return new_county;
}

