#include <stdio.h>

#define MAX_SUM 4000000

int get_sum_less_than_4million_even();

int main()
{
	int sum = 0;
	sum = get_sum_less_than_4million_even();
	printf("==== Get SUM ====\n");
	printf("SUM : %d\n", sum);
	printf("=================\n");
return 0;
}

int get_sum_less_than_4million_even()
{
	int term1 = 1, term2 = 2;//영어로 수학용어인 항은 term이라고 한다.
	int res = 0, sum = 0;
	int temp = 0;

	sum = 2;
	while(res < MAX_SUM)
	{
		res = term1 + term2;
		
		//짝수이면 sum값 갱신
		if(res % 2 == 0)
		{
			sum += res;
		}

		temp = term2;
		term2 = res;
		term1 = temp;
	}
	
return sum;
}
