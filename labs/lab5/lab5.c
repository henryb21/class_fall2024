#include <stdio.h>

void read_n_chars(char arr[], int n) {
    	for (int j = 0; j < n; j++) {
        	scanf("%c", &arr[j]);
    	}
}

void print_n_chars(char arr[], int n) {
	for (int j = 0; j < n; j++) {
        	printf("%c ", arr[j]);
    	}
    	printf("\n");
}


int main(void) {

	int n, numStudents = 0, ID[10], incorrectCount[10] = {0};
	double finalScores[10];
	char key[9], answers[10][9];
	scanf("%d %s", &n, key);
	while(scanf("%d %s", &ID[numStudents], answers[numStudents]) != EOF){
		numStudents++;
	}

	printf("Question : ");	
    	for (int i = 1; i <= n; i++) {
		printf("%d ", i);
	}
	printf("\n");

    	printf("Answer   : ");
    	print_n_chars(key, n);
	printf("ID    Grade(%%)\n");

	for(int i=0; i<numStudents; i++) {
		int correctCount = 0;
		for(int j=0; j<n; j++){
			if(answers[i][j] == key[j]) {
				correctCount++;
			}
			else {
				incorrectCount[j]++;
			}
		}
		finalScores[i] = (double)correctCount / n * 100;
	}
	for(int i=0;i<numStudents;i++){
		printf("%-6d", ID[i]);
		printf("%.2lf\n", finalScores[i]);
		}
	printf("Question : ");
	for (int i = 1; i <= n; i++) {
		printf("%d ", i);
	}
	printf("\n");

	printf("Missed by: ");
	for(int i=0; i<n; i++) {
		printf("%d ", incorrectCount[i]);
	}
	printf("\n");
    	return(0);
}
