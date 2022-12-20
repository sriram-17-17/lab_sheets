// Called linear search because the time complexity is directly proportional to the number of inputs

int linear_search(int list[], int size, int key)
{
	int i;
	for (i = 0; i < size; i++)
	{
		if (key == list[i])
		{
			return i;
		}
	}
	return -1;
}

int main()
{
	int arr[5] = {2, 1, 4, 3, 5};
	int key;
	printf("Enter the number you want to search for:");
	scanf("%d", &key);
	int result;
	result = linear_search(arr, 5, key);
	if (result != -1)
	{
		printf("The element %d is present at the %dth index", arr[result], result);
	}
	else
	{
		printf("The element is not found");
	}
	return 0;
}