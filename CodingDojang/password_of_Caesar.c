#include <stdio.h>
#include <string.h>

int caesar_password();
int input_password(int *n, char *str);

int main()
{
	caesar_password();

	return 0;
}

int caesar_password()
{
	int n = 0;
	char str[50] = {0,};
	char dest[50] = {0,};
	int idx = 0;

	input_password(&n, str);
//	printf("%d : %s \n", n, str);

	while(str[idx] != '\0')
	{
		if(((65 <= str[idx] && str[idx] <= 90) && ((str[idx]+n) > 90)) 
				|| ((97 <= str[idx] && str[idx] <= 122) && ((str[idx]+n) > 122)))
		{
			dest[idx] = (str[idx] - 26) + n;
		}
		else
		{
			dest[idx] = str[idx] + n;
		}
		idx++;
	}

	
	printf("Caesar's password : %s\n", dest);

	return 0;
}

int input_password(int *n, char *str)
{
	int res = -1;

	while(res < 0)
	{
		res = 0;
		printf("===============================\n");
		printf("intput the n : ");
		scanf("%d", n);
		printf("\n");

		if(*n > 25)
		{
			res = -1;
			printf("The number is too long, please input the number below 25\n");
			continue;
		}
	}

	res = -1;
	while(res < 0)
	{
		res = 0;
		printf("===============================\n");
		printf("intput the password : ");
		scanf("%s", str);
		printf("\n");

		if(strlen(str) > 20)
		{
			res = -1;
			printf("The length of words is too long, please input the words below 20words\n");
			continue;
		}
	}

	return 0;
}
