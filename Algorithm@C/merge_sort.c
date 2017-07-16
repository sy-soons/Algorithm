#include <stdio.h>

#define LENGTH_ARRAY 5

void merge_sort(int *arr, int _start, int _end);
int display_arr(int *arr, int size);

int main(void)
{

	//int unsorted[LENGTH_ARRAY] = {4, 1, 3, 2, 5};
	int unsorted[LENGTH_ARRAY] = {4, 31, 17, 18, 5};

	merge_sort(unsorted, 0, LENGTH_ARRAY);

	display_arr(unsorted, LENGTH_ARRAY);

	return 0;
}

void merge_sort(int *arr, int _start, int _end)
{
	int mid = 0;
	int temp[LENGTH_ARRAY] = {0,};
	int i = 0, j = 0, k = 0;

	if((_end - _start) < 2) return;

	mid = (_start + _end) / 2;

	merge_sort(arr, _start, mid);
	merge_sort(arr, mid, _end);

#if(0)
	printf("----------------\n");
	printf("start : %d, end : %d\n", _start, _end);
#endif

	//sort routine
	i = _start;
	j = mid;
	for(k = _start; k < _end; k++)
	{
		if(i < mid && (j >= _end || arr[i] <= arr[j]))
		{
			temp[k] = arr[i];
			i++;
		}
		else
		{
			temp[k] = arr[j];
			j++;
		}
	}
	for(i = _start; i < _end; i++)
	{
		arr[i] = temp[i];
	}

	display_arr(arr, LENGTH_ARRAY);
}

int display_arr(int *arr, int size)
{
	int i = 0;

	if(arr == NULL)
	{
		return -1;
	}

	printf("==== display_arr ====\n");
	for(i = 0; i < size; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n=====================\n");

	return 0;
}