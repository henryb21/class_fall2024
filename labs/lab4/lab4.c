#include <stdio.h>
#include <math.h>
void printTallies(int n);
double calculateAverageTemp(int z, int m);

int main() {
	int tempCollector = 0;
	int tempSummation = 0;
	int hotDays = 0;
	int pleasantDays = 0;
	int coldDays = 0;

	do{
		printf("Enter a high temp reading (-99 to quit)> ");
		scanf("%d:", &tempCollector);
	
		if(tempCollector >= 85){
			hotDays++;
			tempSummation += tempCollector;
		}
		else if(tempCollector >= 64 && tempCollector < 85){
			pleasantDays++;
			tempSummation += tempCollector;
		}
		else if(tempCollector < 60 && tempCollector != -99) {
			coldDays++;
			tempSummation += tempCollector;
		}else{
			break;
		}

	}while(tempCollector != -99);
	
	printf("H: ");
	printTallies(hotDays);
	printf("P: ");
	printTallies(pleasantDays);
	printf("C: ");
	printTallies(coldDays);
	
	double totalDays = hotDays + pleasantDays + coldDays;
	if(totalDays > 0){
		double average = calculateAverageTemp(tempSummation, totalDays);	
		printf("Temp sum: %d\n", tempSummation);
		printf("Average temperature: %.1lf\n", average + 0.05);
	}

	return 0;
}

void printTallies(int typeDay) {
	for(int i=0; i < typeDay; i++){
		printf("*");
	}
	printf("\n");
}

double calculateAverageTemp(int tempSummation, int totalDays) {
	double averageTemp = (tempSummation / (double)totalDays);
	printf("average temp: %lf", averageTemp);
	return averageTemp;
}
