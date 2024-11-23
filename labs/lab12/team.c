#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "team.h"

Person *create_new_person(char *name) {
    Person *person;
    person = malloc(sizeof(Person));
    strncpy(person->name, name, sizeof(person->name));
    return person;

}

void initialize_team(Team *t, int capacity) {
	t->members = malloc(sizeof(Person) * capacity);
	t->size = 0;
	t->capacity = capacity;
}

void insert_person_at_back(Team *t, Person *p) {
	if(t->size >= t->capacity){
                t->capacity *= 2;
                t->members = realloc(t->members, sizeof(Person) * t->capacity);
        }
	if(t->size < t->capacity) {
		t->members[t->size] = *p;
		t->size++;
		free(p);
	}
}

void print_team(Team *t) {
    printf("[");	
    for (int i=0; i < t->size; i++) {
        printf("%s", t->members[i].name);
	if(i < t->size - 1){
		printf(", ");
	}
    }
    printf("]\n");
    printf("Capacity is %d and current size is %d\n", t->capacity, t->size);
}

void delete_person_at_back(Team *t) {
	
	if (t->size == 0 && t->capacity > 1) {
        	t->capacity = 1;
        	t->members = realloc(t->members, sizeof(Person) * t->capacity);
	}

	if(t->size > 0) {
		t->size--;
     	}

	if (t->size == 4 && t->capacity > 4) {
                t->capacity = 4;
                t->members = realloc(t->members, sizeof(Person) * t->capacity);
        }
}

void decommission_team(Team *t) {
	free(t->members);
	t->size = 0;
	t->capacity = 0;
}
