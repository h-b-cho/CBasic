#include <stdio.h>

void add(int *pa);

int main(void)
{
	int a = 10;
	add(&a);
	printf("a: %d\n", a);

	return 0;
}

void add(int *pa)
{
	*pa = *pa + 10;
} 