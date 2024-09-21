#include<stdio.h>
#define Water 100
#define Mercury 357
#define Copper 1187
#define Silver 2193
#define Gold 2660

int within_x_percent(double ref, double data, double x){
	double error_value = (ref * (x / 100));
	//printf("This error value = %f", error_value);
	if((data > (ref - error_value)) && (data < (ref + error_value))){
		return 1;
	}else{	
		return 0;
	}
}
int main() {
	char answer;
	double boiling_point;
	double percentage = 5.00;
	
	printf("Observed boiling point (in deg. C)? ");
	scanf("%lf", &boiling_point);
	printf("You entered %.2lf\n", boiling_point);
	printf("Custom error percent? n for no (5%% default), y for yes: ");
	scanf(" %c", &answer);

	switch(answer) {
		case 'N':
		case 'n':
			percentage = 5.00;
			break;
		case 'Y':
		case 'y':
			printf("Enter error percent: ");
			scanf("%lf", &percentage);
			printf("You entered %.2lf percent\n", percentage);
			break;
		default:
			printf("Error: bad input\n");
			return 1;
			break;
	}
	
	if(within_x_percent(Water, boiling_point, percentage) == 1){
		printf("Substance is water\n");	
	
	}else if(within_x_percent(Mercury, boiling_point, percentage) == 1){
		printf("Substance is mercury\n");

	}else if(within_x_percent(Copper, boiling_point, percentage) == 1){
		printf("Substance is copper\n");

	}else if(within_x_percent(Silver, boiling_point, percentage) == 1){
		printf("Substance is silver\n");

	}else if(within_x_percent(Gold, boiling_point, percentage) == 1){
		printf("Substance is gold\n");
	}else{
		printf("Substance unknown\n");
	}
	return 0;

}
