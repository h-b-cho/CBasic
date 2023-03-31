#include <stdio.h>

int main(void){
	unsigned char a = 4 >> 1;  // 0000 0100
	unsigned char b = 8 >> 2;  // 0000 1000
    
	printf("4 >> 1 : %d\n", a);
	printf("8 >> 2 : %d\n", b);
	
	a = 14 >> 3;  // 0000 1110
	b = 16 >> 4; // 0001 0000

	printf("14 >> 3 : %d\n", a);
	printf("16 >> 4 : %d\n", b);
	
	char c = -16 >> 2;  // 1111 0000
	
	printf("-16 >> 2 : %d\n", c);
}