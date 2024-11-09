#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include "team.h"

Person *create_new_person(char *name) {
    Person *person;
    person = malloc(sizeof(Person));
    strncpy(person->name, name, sizeof(person->name));
    person->next = NULL;
    return person;

}

void insert_person_at_front(Team *t, Person *p) {
	p->next = t->head;
	t->head = p;
}

void print_team(Team *t) {
    Person *current = t->head;
    while (current != NULL) {
        printf("%s->", current->name);
        current = current->next;
    }
}

void delete_person_at_front(Team *t) {
     if(t->head != NULL) {
         Person *temp = t->head;
         t->head = t->head->next;
         free(temp);
     }
}

int is_empty(Team t) {
    return t.head == NULL;

}
