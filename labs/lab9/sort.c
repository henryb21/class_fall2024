#include "sort.h"

int get_min_in_range(County counties[], int count, int start) {
	int index_of_min = start;
	for (int i = start + 1; i < count; i++) {
		if (strcmp(counties[i].name, counties[index_of_min].name) < 0) {
			index_of_min = i;
		}
	}
	return index_of_min;
}

void sort(County counties[], int count) {
	for (int i = 0; i < count - 1; i++) {
		int index_of_min = get_min_in_range(counties, count, i);
		if (index_of_min != i) {
			County temp = counties[i];
			counties[i] = counties[index_of_min];
			counties[index_of_min] = temp;
		}
	}
}

