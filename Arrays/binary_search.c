#include <stdio.h>
#define SIZE 5
main()
{
	int arr[SIZE] = {1, 2, 3, 4, 5};
	int key = 2;
	int low, mid, high;
	low = 0;
	high = SIZE - 1;
	while (low <= high)
	{
		mid = (low + high) / 2;
		if (key > arr[mid])
		{
			low = mid + 1;
		}
		else if (key < arr[mid])
		{
			high = mid - 1;
		}
		else
		{
			printf("Element is %d found at %d", arr[mid], mid);
			return;
		}
	}
	printf("Element you are looking for is not found\n\n");
	return;
}