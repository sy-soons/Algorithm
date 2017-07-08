#include <stdio.h>

#define LEN_UNSORTED 5

int swap(int *_x, int *_y);
int display(int *arr, int size);

int main(void)
{
	int unsorted[LEN_UNSORTED] = {4, 1, 3, 5,2};
	int iCount = 0,iStart = 0, iEnd = 0;
	int min = 0, key = 0;
	int k = 0;

	for(iStart = 0;iStart<LEN_UNSORTED;iStart++)
	{
		min = unsorted[iStart];
		for(k = iStart; k<LEN_UNSORTED; k++)
		{
			if(unsorted[k] < min)
			{
				min = unsorted[k];
				key = k;
			}
		}
		swap(&unsorted[iStart], &unsorted[key]);
	}

	display(unsorted, LEN_UNSORTED);

return 0;
}

int swap(int *_x, int *_y)
{
	int temp = 0;
	temp = *_x;
	*_x = *_y;
	*_y = temp;
return 1;
}

int display(int *arr, int size)
{
	int i = 0;
	
	printf("==== display ====\n");
	for(i = 0; i<size; i++)
	{
		printf("%d  ", arr[i]);		
	}
	printf("\n=================\n");
return 1;
}
