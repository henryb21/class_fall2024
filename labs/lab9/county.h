#ifndef COUNTY_H
#define COUNTY_H

#define NAMESIZ 100
#define SEATSIZ 25

typedef struct {
	char name[NAMESIZ];
	char seat[SEATSIZ];
	int pop;

}County;

County add_county(char name[NAMESIZ], char seat[SEATSIZ], int pop);

#endif
