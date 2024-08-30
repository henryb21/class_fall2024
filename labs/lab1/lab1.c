#include<stdio.h>
#define minuteConversion 60 
int main() {
	double hours;
	double minutes;
	double totalTime;
	double currentTemp;

	printf("Hours and minutes since power outage? (e.g., 2 30 for 2 hours, 30 minutes)");
	scanf("%lf %lf", &hours, &minutes);

	totalTime = (hours + (minutes / minuteConversion));
	currentTemp = (((3 * (totalTime * totalTime))/(totalTime + 1)) - 10);
	
	//printf("Entered hours: %lf\n", hours);
	//printf("Entered minutes: %lf\n", minutes);
	//printf("Calculuted total time: %lf\n", totalTime);
	printf("Estimated current temperature: %.2lf degrees Celsius\n", currentTemp);
		
}
