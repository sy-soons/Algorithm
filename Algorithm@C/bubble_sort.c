#include <stdio.h>

#define LEN_ARRAY 5

int bubble_sort(int *_unsorted, int size);
void display_array(int *arr, int size);
void swap(int *x, int *y);

int main()
{
	int unsorted[LEN_ARRAY] = { 4, 1, 3, 2, 5 };
	//int unsorted[LEN_ARRAY] = { 8, 31, 2, 1, 99 };

	printf("== Before bubble_sort ==\n");
	display_array(unsorted, LEN_ARRAY);

	bubble_sort(unsorted, LEN_ARRAY);

	printf("== After bubble_sort ==\n");
	display_array(unsorted, LEN_ARRAY);
	return 0;
}

int bubble_sort(int *_unsorted, int size)
{
	int i = 0, j = 0;

	for(i = size-1; i >= 0; i--)
	{
		for(j = 0; j < i; j++)
		{
			if(_unsorted[j] > _unsorted[j+1])
				swap(&_unsorted[j], &_unsorted[j+1]);
		}
	}

	return 0;
}

void display_array(int *arr, int size)
{
	int i = 0;

	printf("==== display ====\n");
	for(i = 0; i<size; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n=================\n");

}

void swap(int *x, int *y)
{
	int temp = 0;

	temp = *x;
	*x = *y;
	*y = temp;
}