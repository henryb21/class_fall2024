#include <stdio.h>

int main(void) {
	int array[3][5];
	int rowSum = 0;
	int rowSums[3] = {0,0,0};

    // read in a 3 by 5 array of ints

    // for each of the 3 rows, print 
    // the sum of the 5 numbers in the row
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 5; j++) {
		scanf("%d", &array[i][j]);
		rowSum += array[i][j];
		rowSums[i] += rowSum;
		rowSum = 0;
        }
	rowSum = 0;
    }
    for (int i = 0; i < 3; i++) {
    	printf("Row %d has total %d.\n", i, rowSums[i]);
    }
    return 0;
}
