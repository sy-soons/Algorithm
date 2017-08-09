#include <stdio.h>

int count_perfect_number(int n);

int main()
{
	int in_number = 0;
	int res_is_perfect_number = 0; 

	printf("input : ");
	scanf("%d", &in_number);

	res_is_perfect_number = count_perfect_number(in_number);

	printf("==== check perfect number ====\n");
	if(res_is_perfect_number) 
	{
		printf("[%d] %d is perfect number\n", res_is_perfect_number, in_number);
	}
	else
	{
		printf("[%d] %d is not perfect number\n", res_is_perfect_number, in_number);
	}
	printf("==============================\n");

	return 0;
}


int count_perfect_number(int n)
{
	int sum = 0;
	int i = 0, j = 0;
	int is_perfect = 0;

	//숫자 1~n
	for(i = 1; i < n; i++)
	{
		//현재 숫자가 완전수인지 체크(1부터 n까지 하나씩 증가, 약수이면 sum에 더함.)
		if((n % i) == 0)
		{
			sum += i;
			//printf("[%s]sum : %d, n : %d, i : %d\n", __func__, sum, n, i);
		}
	}
	//sum이 n과 같으면 완전수, 다르면 완전수가 아니다.
	if(sum == n)	is_perfect = 1;
	else			is_perfect = 0;

	return is_perfect;
}
