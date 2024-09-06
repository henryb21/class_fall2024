#include<stdio.h>
double questionaire(int);
void finalStatement(double);

int main() {
	double total1;
	double total2;
	double total3;
	double finalTotal;

	total1 = questionaire(1);
	total2 = questionaire(2);
	total3 = questionaire(3);
	
	finalTotal = total1 + total2 + total3;

	finalStatement(finalTotal);


	return 0;
}

double questionaire(int day){
	int hours;
	double wage;
	double total;

	printf("Enter hours worked on day %d: ", day);
	scanf("%d", &hours);
	printf("Enter hourly wage on day %d: $", day);
	scanf("%lf", &wage);

	total = hours * wage;

	return total;
}

void finalStatement(double finalTotal){
	printf("\nYour total pay is $%.2lf\n", finalTotal);
}
