#include <stdio.h>
#include <string.h>
#include <math.h>
#include "character.h"

void init_character(Character *c, const char *name, int xp, int hp) {
    strncpy(c->name, name, sizeof(c->name) - 1);
    c->name[sizeof(c->name) - 1] = '\0';
    c->xp = xp;
    c->hp = hp;
}

void fight(Character *c1, Character *c2) {
    printf("### LET'S FIGHT ###\n");
    printf("%s (%d XP, %d HP) vs. %s (%d XP, %d HP)\n", 
           c1->name, c1->xp, c1->hp, c2->name, c2->xp, c2->hp);

    if (c1->xp == c2->xp) {
        printf("It's a tie!\n");
        return;
    }

    Character *winner, *loser;
    if (c1->xp > c2->xp) {
        winner = c1;
        loser = c2;
    } else {
        winner = c2;
        loser = c1;
    }

    
    int damage = winner->xp - loser->xp;
    loser->hp -= damage;
    printf("%s deals %d damage to %s\n", winner->name, damage, loser->name);

    
    if (loser->hp <= 0) {
        loser->hp = 0;
        strncat(loser->name, " (deceased)", sizeof(loser->name) - strlen(loser->name) - 1);
    }

   
    winner->xp = round(winner->xp + log10(winner->xp));

   
    loser->xp = round(loser->xp * 1.5);
}

void print_character(const Character *c) {
    printf("%s (%d XP, %d HP)\n", c->name, c->xp, c->hp);
}

