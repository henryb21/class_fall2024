#include <stdio.h>

void cumulative_sum(double arr[], double result[], int n) {
	double z = 0;
	for (int i = 0; i < n; ++i) {
		z += arr[i];
		result[i] = z;
	}
}

int main(void) {
    double arr[] = {65.4, 76.8, 9.2, 54.01};
    double result[] = {0, 0, 0, 0};
    int n = 4;

    cumulative_sum(arr, result, n);

    printf("result:\n");
    for (int i = 0; i < n; i++) {
        printf("%.2f ", result[i]);
    }
    printf("\n");

}
