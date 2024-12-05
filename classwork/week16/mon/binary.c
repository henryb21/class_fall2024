#include <stdio.h>

// Function to print a number in binary
void print_binary(unsigned int num) {
    for (int i = 31; i>=0; i--){
        unsigned int mask = (1 << i);

	printf("%d", (num & mask) ? 1 : 0);

	if (i != 0 && i%4 == 0){
            printf(" ");
	}
    }
    printf("\n");
}

int main(void) {
    // should print 0000 0000 0000 0000 0000 0000 0011 0010 
    print_binary(50);
   // should print 0000 0000 0000 0011 1001 0111 1010 1000 
    print_binary(235432);
    // should print 0000 0001 0011 0001 0000 1111 0110 0111
    print_binary(19992423);
}
