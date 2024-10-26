#ifndef UTILS_H
#define UTILS_H
#include "county.h"

#define MAX_STRING_COUNT 100
#define MAX_STRING_LENGTH 499

void menu();
County* find_seat(County counties[], int count, char seat[]);
void find_range(County counties[], int count, int upperbound, int lowerbound);

#endif
