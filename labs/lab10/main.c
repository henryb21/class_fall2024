#include <stdio.h>
#include <stdlib.h>
#include "character.h"

int main(int argc, char *argv[]) {
    if (argc != 7) {
        fprintf(stderr, "Usage: %s <name1> <xp1> <hp1> <name2> <xp2> <hp2>\n", argv[0]);
        return 1;
    }

    Character c1, c2;
    init_character(&c1, argv[1], atoi(argv[2]), atoi(argv[3]));
    init_character(&c2, argv[4], atoi(argv[5]), atoi(argv[6]));

    fight(&c1, &c2);

    printf("\nResult is:\n");
    print_character(&c1);
    print_character(&c2);

    return 0;
}

