// Idea of selection sort is that the left half of the list is sorted while, the right half is not
// You find the minimum element of that part and bring it to the first index in that part

#include <stdio.h>

void selection_sort(int arr[], int n)
{
	int temp;
	int min;
	int i, j;
	for (i = 0; i < n - 1; i++)
	{
		min = i;
		for(j = i + 1; j < n; j++)
		{
			if (arr[min] > arr[j])
			{
				min = j;
			}
		}
		temp = arr[i];
		arr[i] = arr[min];
		arr[min] = temp;
	}
}

int main()
{
	int list[5] = {2, 3, 1, 5, 4};
	selection_sort(list, 5);
	for (int i = 0; i < 5; i++)
	{
		printf("%d\t", list[i]);
	}
	printf("\n\n");
	return 0;
}