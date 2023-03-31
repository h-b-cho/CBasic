#include <stdio.h>

int main()
{  
	int arr[6] = {3, 7, 2, 5, 1, 4};
	int length = sizeof(arr)/sizeof(int);

	// printf("정렬 전 : ");
	// for(int i=0; i<length; i++)
	// {
	// 	printf("%d ", arr[i]);
	// }

	int j;
	int temp;
	for(int i=1; i<length; i++)
	{
		temp = arr[i];
		j = i-1;
		while(0<=j && temp<arr[j])
		{
			arr[j+1] = arr[j];
			j--;
		}		
		arr[j+1] = temp;
	}

	// printf("\n정렬 후 : ");
	for(int i=0; i<length; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}