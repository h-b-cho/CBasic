#include <stdio.h>

int sumNums(int num1, int num2) 
{ 
	return num1 + num2; 
}

int main()
{
	int num1;
	int num2;
	scanf("%d", &num1);
	scanf("%d", &num2);
	
	int result = sumNums(num1, num2);
	
    printf("a와 b의 합 : %d", result);

    return 0;
}