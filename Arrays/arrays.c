#include <stdio.h>

#define SIZE 9

float avg(int n, int list[])
{
	int sum = 0;
	for(int i = 0; i < n; i++)
	{
		sum = sum + list[i];
	}

	return (float)sum/ n;

}

int main()
{
	int arr[SIZE];
	float average;
	for(int i = 0; i < SIZE; i++)
	{
		arr[i] = i + 1;
	}
	average = avg(SIZE, arr);
	printf("Average : %f\n\n", average);
	return 0;
}

// Both list[] and arr[] point to the same location in computer memory

// Whatever changes you make for an array in a remote function, the change gets reflected in the main memory

//  We cannor declare an array inside a function and return it, the reference to it dissapears as soon as the function's lifetime is over

