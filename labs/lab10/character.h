#ifndef CHARACTER_H
#define CHARACTER_H

typedef struct {
    char name[50];
    int xp;
    int hp;
} Character;

void init_character(Character *c, const char *name, int xp, int hp);
void fight(Character *c1, Character *c2);
void print_character(const Character *c);

#endif
