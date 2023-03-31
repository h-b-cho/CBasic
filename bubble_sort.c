#include <stdio.h>

int main()
{
	int arr[10] = { 9, 17, 5, 6, 124, 112, 1, 3, 87, 55 };

	int temp;
	int length = sizeof(arr)/sizeof(int);

	// printf("정렬 전 : ");
	for(int i=0; i<length; i++)
	// {
	// 	printf("%d ", arr[i]); 
	// }

	for(int i=0; i<length-1; i++)
	{
		for(int j=0; j<length-1; j++)
		{
			if(arr[j+1] > arr[j])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
			}
		}
	}

	// printf("\n정렬 후 : ");
	for(int i=0; i<length; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}