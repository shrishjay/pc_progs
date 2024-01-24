//to find the largest element in the array

#include<stdio.h>
void main()
{
	int arr[10], size;
	printf("Enter size of array ");
	scanf("%d",&size);

	for (int i = 0; i < size; i++)
	{
		printf("enter elements of array \n");
		scanf("%d", &arr[i]);
	}

	int max = arr[0];
	for (int i = 1; i < size; i++)
	{
		if (arr[i] > max)
		{
			max = arr[i];
		}
	}
    printf("largest element of the array is %d", max);
}
