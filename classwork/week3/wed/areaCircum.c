#include<stdio.h>
#define pi 3.141589
double cal_circum(double);
double cal_area(double);
void print_area_circum(double, double);

int main(){
	double radius;
	printf("Please read a radius from the keyboard");
	scanf("%lf", &radius);
	double circum = cal_circum(radius);
	double area = cal_area(radius);
	print_area_circum(circum, area);

	return 0;

}

double cal_circum(double radius){
	return 2 * pi * radius;
}

double cal_area(double radius){

	return pi * radius * radius;
}

void print_area_circum(double circum, double area){
	printf("circum=%f, area=%f\n", circum, area);
}
