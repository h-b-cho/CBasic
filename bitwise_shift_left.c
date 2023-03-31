#include <stdio.h>

int main(void)
{
    unsigned char a = 4 << 1;  // 0000 0100
    unsigned char b = 8 << 2;  // 0000 1000
    
    printf("4 << 1 : %d\n", a);
    printf("8 << 2 : %d\n", b);
	
    a = 6 << 3;  // 0000 0110
    b = 10 << 4; // 0000 1010

    printf("6 << 3 : %d\n", a);
    printf("10 << 4 : %d\n", b);

	char a = 1 << 8;  // 0000 0001
	int b = 1 << 8;   // 0000 0000 0000 0000 0000 0000 0000 0001
    
	printf("(char) 1 << 8 : %d\n", a);
	printf("(int) 1 << 8 : %d\n", b);
	
	unsigned char c = 1 << 7;
	char d = 1 << 7;
	
	printf("(unsigned) 1 << 7 : %d\n", c);
	printf("(signed) 1 << 7 : %d\n", d);
    
    return 0;	
}