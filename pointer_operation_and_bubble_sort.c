void bubbleSort(int *arr)
{
	int temp;
	for(int i=0; i<9; i++)
	{
		for(int j=0; i+j<9; j++)
		{
			if(*(arr+j) > *(arr+j+1)) // arr+j == j번째원소의주소, *(arr+j)==j번째원소의값
			{
				temp = *(arr+j);
				*(arr+j) = *(arr+j+1);
				*(arr+j+1) = temp;
			}
		}
	}
}

int main()
{
	int arr[10];
	for(int i=0; i<10; i++)
	{
		scanf("%d", &arr[i]);
	}

	bubbleSort(arr);

	for(int i=0; i<10; i++)
	{
		printf("%d ", arr[i]);
	}
	
	return 0;
}
