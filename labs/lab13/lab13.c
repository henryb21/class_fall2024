#include <stdio.h>
#include <string.h>

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

// Function to print a number in hex
void print_hex(unsigned int num) {
    char digits[] = "0123456789abcdef";
    for (int i = 7; i>=0; i--) {
	int value = (num >> (i * 4)) & 0xF;
        printf("%c", digits[value]);

        if( i!=0) {
            printf("    ");
        }
    }
    printf("\n");
}

// Function to set, clear, and toggle a bit
unsigned int modify_bit(unsigned int num, unsigned int pos, unsigned int operation) {
    // TODO: implement this function
    switch (operation) {
        case 1:
	    num |= (1 << pos);
	    break;
	case 2:
            num &= ~(1 << pos);
	    break;
	case 3:
	    num ^= (1 << pos);
	    break;
    }
    return num;
}

// no need to change main
int main() {
    unsigned int a, b, pos, choice;

    printf("Enter two unsigned integers: ");
    scanf("%u %u", &a, &b);

    printf("\nBinary & hex representation:\n");
    printf("Number 1: \n"); print_binary(a); print_hex(a);
    printf("Number 2: \n"); print_binary(b); print_hex(b);

    printf("\nBitwise AND of Number 1 and Number 2: %u\n", a & b);
    printf("Binary & hex representation:\n");
    print_binary(a & b); print_hex(a & b);

    printf("\nBitwise OR: %u\n", a | b);
    printf("Binary & hex representation:\n");
    print_binary(a | b); print_hex(a | b);

    printf("\nBitwise XOR: %u\n", a ^ b);
    printf("Binary & hex representation:\n");
    print_binary(a ^ b); print_hex(a ^ b);

    printf("\nBitwise NOT on first number: %u\n", ~a);
    printf("Binary & hex representation:\n");
    print_binary(~a); print_hex(~a);
    printf("\nBitwise NOT on second number: %u\n", ~b);
    printf("Binary & hex representation:\n");
    print_binary(~b); print_hex(~b);

    printf("\nEnter a bit position to modify: ");
    scanf("%u", &pos);
    printf("Set, clear, or toggle (1/2/3)? ");
    scanf("%u", &choice);
    printf("Original number: %u\n", a); print_binary(a); print_hex(a);
    a = modify_bit(a, pos, choice);
    printf("Modified number: %u\n", a);
    printf("Binary & hex representation:\n");
    print_binary(a); print_hex(a);

    return 0;
}
