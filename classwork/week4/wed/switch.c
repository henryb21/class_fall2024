#include<stdio.h>

int main(){
	printf("Please tell me the serial number");
	char serial_num;
	scanf("%c", &serial_num);

	switch(serial_num){
		case 'b':
		case 'B':
			printf("Battleship\n");
			break;
		case 'c':
		case 'C':
			printf("Cruiser\n");
			break;
		case 'd':
		case 'D':
			printf("Destroyer\n");
			break;
		case 'f':
		case 'F':
	}

}
