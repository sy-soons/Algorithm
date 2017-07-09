#include <stdio.h>
 
#define LEN_UNSORTED 5
 
int display_array(int *arr, int size);
int insert_sort(int *arr);
 
int main()
{
	int unsorted[5] = { 4, 1, 3, 2, 5 };

	printf("==== before ====\n");
	display_array(unsorted, LEN_UNSORTED);

	insert_sort(unsorted);
 
	printf("==== after ====\n");
	display_array(unsorted, LEN_UNSORTED);

	return 0;
}
 
int display_array(int *arr, int size)
{
	int i = 0;
	printf("==== display ====\n");
	for (i = 0; i < size; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n===============\n");
	return 1;
}

int insert_sort(int *arr)
{
	int iStart = 0, iEnd = 0;
	int k = 0, pos = 0, val = 0, idx = 0;
 	int *unsorted = arr;

	for (iStart = 1; iStart < LEN_UNSORTED; iStart++)
	{
		val = unsorted[iStart];
		for (k = 0; k <= iStart; k++)
		{
			if (val < unsorted[k])
			{
				printf("#######%d: [%d]#######\n", val, unsorted[k]);
				pos = k;
				for (idx = iStart; idx > k; idx--)
				{
					unsorted[idx] = unsorted[idx - 1];
				}
				unsorted[pos] = val;
				break;
			}
		}
		
		//display_array(unsorted, LEN_UNSORTED);
	}
	return 1;
}