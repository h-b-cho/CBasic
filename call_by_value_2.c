#include <stdio.h>

int add(int a);

int main(void)
{
	int a = 10;
	a = add(a);
	printf("a: %d\n", a);

	return 0;
}

int add(int a)
{
	a = a+10;

	return a;
} 