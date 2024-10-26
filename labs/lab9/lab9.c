#include <stdio.h>
#include <string.h>
#include "county.h"
#include "sort.h"
#include "utils.h"

int main() {
    FILE *in;
    County counties[MAX_STRING_COUNT];
    char strings[MAX_STRING_COUNT][MAX_STRING_LENGTH];
    int count = 0;
    char input[100], search[100];

    in = fopen("/public/labs/lab8/counties1.txt", "r");
    if (!in) {
        printf("Failed to open counties1.txt\n");
        return 1;
    }

    while (count < MAX_STRING_COUNT && fgets(strings[count], MAX_STRING_LENGTH, in)) {
        count++;
    }
    fclose(in);

    for (int i = 0; i < count; i++) {
        char *name = strtok(strings[i], "|");
        char *seat = strtok(NULL, "|");
        strtok(NULL, "|");
        strtok(NULL, "|");
        char *pop_str = strtok(NULL, "|");
        int pop;
        sscanf(pop_str, "%d", &pop);
        counties[i] = add_county(name, seat, pop);
    }

    sort(counties, count);

    while (1) {
        menu();
        if (scanf("%s", input) != 1) break;
        if (strcmp(input, "1") == 0) {
            printf("Enter a county to search for: ");
            scanf("%s", search);
            County* result = find_seat(counties, count, search);
            if (result) {
                printf("%s has seat %s\n", result->name, result->seat);
            } else {
                printf("Input not found\n");
            }
        } else if (strcmp(input, "2") == 0) {
            int upper, lower;
            printf("Enter an upper bound: ");
            scanf("%d", &upper);
            printf("Enter a lower bound: ");
            scanf("%d", &lower);
            find_range(counties, count, upper, lower);
        } else {
            break;
        }
    }

    return 0;
}




