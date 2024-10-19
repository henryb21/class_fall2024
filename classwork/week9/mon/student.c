#include <stdio.h>
#include<string.h>
typedef struct{
	char name[20];
	int id;
	double gpa;
	int year;
	int age;
}Student;
int main(){
	Student student1;
	strcpy(student1.name, "Steven Jobs");
	student1.id = 0;
	student1.gpa = 4.0;
	student1.year = 1;
	student1.age = 18;
	printf("%s %d %f %d %d\n", student1.name, student1.id, student1.gpa, student1.year, student1.age);
	printf("%lu\n", sizeof(student1));
	return 0;

}
