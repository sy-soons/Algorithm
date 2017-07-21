#include <stdio.h>

#define LEN_ARR 9
#define PREV_PARTITION
#define SWAP(x, y, t) ( (t) = (x), (x) = (y), (y) = (t) )

void quick_sort(int *unsorted, int start, int end);
int partition(int *unsorted, int start, int end);
int partition2(int *unsorted, int start, int end);
void display_array(int *unsorted, int length);

int main(void)
{
	int unsorted[LEN_ARR] = {5, 3, 8, 4 ,9 , 1, 6 ,2, 7};

	quick_sort(unsorted, 0, LEN_ARR-1);
	display_array(unsorted, LEN_ARR);

	return 0;
}

void quick_sort(int *unsorted, int start, int end)
{
	int pos = 0;

	if(start < end)
	{
	#ifdef PREV_PARTITION
		pos = partition(unsorted, start, end);
	#else
		pos = partition2(unsorted, start, end);
	#endif
		quick_sort(unsorted, start, pos-1);
		quick_sort(unsorted, pos+1, end);
	}
}

int partition(int *unsorted, int start, int end)
{
	int pivot = 0, temp = 0;
	int left = 0, right = 0;

	//left, right 인덱스 변수 - pivot을 찾기위한 순회시에 사용.
	left = start; right = end+1;

	//pivot을 현재 리스트의 맨 처음 원소로 set.
	pivot = unsorted[start];
	printf("[%d : %d][%d : %d] pivot : %d\n", left, right, start, end, pivot);

	do{
		do{
			left++;//do-while문이기 때문에 left와 end의 차이는 최소 1이상이다. 
					//그래서 분할된 list가 최소 3개 이상이어야 left가 증가하면서 순회한다.
		}while(left <= end && unsorted[left] < pivot);

		do{
			right--;//do-while문이기 때문에 right와 end의 차이는 최소 1이상이다. 
					//그래서 분할된 list가 최소 3개 이상이어야 partition을 한다.
		}while(right >= start && unsorted[right] > pivot);
		
		if(left < right) SWAP(unsorted[left], unsorted[right], temp);

	}while(left < right);
	
	//리스트의 순회를 끝냄. left와 
	SWAP(unsorted[start], unsorted[right], temp);
	
	display_array(unsorted, LEN_ARR);

return right;
}

int partition2(int *unsorted, int start, int end)
{
	int pivot = 0, temp = 0;
	int left = 0, right = 0;

	//left, right 인덱스 변수 - pivot을 찾기위한 순회시에 사용.
	left = start+1; right = end;

	//pivot을 현재 리스트의 맨 처음 원소로 set.
	pivot = unsorted[start];
	printf("[%d : %d][%d : %d] pivot : %d\n", left, right, start, end, pivot);

	while(left < right)
	{
		while(left <= end && unsorted[left] < pivot)
		{
			left++;//left
		}

		while(right >= start && unsorted[right] > pivot)
		{
			right--;//right
		}
		if(left < right) SWAP(unsorted[left], unsorted[right], temp);
	}	
	//리스트의 순회를 끝냄. pivot과 right의 값을 바꾼다.
	SWAP(unsorted[start], unsorted[right], temp);

	display_array(unsorted, LEN_ARR);
return right;
}

void display_array(int *unsorted, int length)
{
	int i = 0;

	printf("==== display array ====\n");
	for(i = 0; i<length; i++)
	{
		printf("%d  ", unsorted[i]);
	}
	printf("\n======================\n");
}
