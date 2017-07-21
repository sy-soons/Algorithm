#include <stdio.h>
#include <string.h>

#define LEN_ARR 8
int *get_min_pair(int *arr, int size, int *length_pairs);
void display_arr(int *arr, int size);
int main()
{
	int points_S[LEN_ARR] = { 1, 3, 4, 8, 13, 17, 20, 21 };
	int length_pairs = 0;
	int *min_pairs = NULL;
	int i = 0;

	min_pairs = get_min_pair(points_S, LEN_ARR, &length_pairs);

	display_arr(points_S, LEN_ARR);

	printf("==== display ====\n");
	for(i = 0; i < length_pairs; i += 2)
	{
		printf("(%d, %d)\n", min_pairs[i], min_pairs[i+1]);
	}
	printf("=================\n");
}

int *get_min_pair(int *arr, int size, int *length_pairs)
{
	int i = 0;
	int min = 0;
	int count = 0;
	int *pairs = NULL;
	int idx = 0;

	pairs = (int *)malloc(size);//(count);
	memset(pairs, 0, count);

	min = arr[1] - arr[0];

	for(i = 0; i < size-1; i++)
	{
		if(min > (arr[i+1] - arr[i]))
		{
			min = arr[i+1] - arr[i];
			//printf("min : %d, idx = i\n", min, i);
		}
	}

	for(i = 0; i < size-1; i++)
	{
		if((arr[i+1] - arr[i]) == min)
		{
			//count++;
			printf("(%d, %d), idx = %d\n", arr[i], arr[i+1], i);
			pairs[idx++] = arr[i];
			pairs[idx++] = arr[i+1];
		}
	}
	*length_pairs = idx;

return pairs;
}

void display_arr(int *arr, int size)
{
	int i = 0;

	printf("---- display array ----\n");
	for(i = 0; i < size; i++)
	{
		printf("%d  ", arr[i]);
	}
	printf("\n------------------------\n");
}
