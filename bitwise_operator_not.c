#include <stdio.h>

int main(void)
{
	unsigned char a = 4;  // 0000 0100
	unsigned char b = 8;  // 0000 1000
	unsigned char c = ~a;
	unsigned char d = ~b;

	printf("4와 8의 NOT 연산 값 : %d, %d\n", c, d);

	a = 6;  // 0000 0110
	b = 13; // 0000 1101
	c = ~a;
	d = ~b;

	printf("6과 13의 NOT 연산 값 : %d, %d", c, d);

	return 0;	
}