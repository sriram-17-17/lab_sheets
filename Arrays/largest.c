#include <stdio.h>

int max_element(int n, int list[])
{
	int temp;
	int i = 0;
	temp = i;
	for(i = 1; i < n; i++)
	{
		if (list[temp] > list[i])
		{
			temp = i;
		}
	}
	return temp;
}

int main()
{
	int arr[5] = {3, 2, 5, 4, 1};
	int index;
	index = max_element(5, arr);
	printf("%d\n\n", arr[index]);
	return 0;
}