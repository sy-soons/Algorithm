#include <stdio.h>

int get_total_post(int post_total, int post_per_page);

int main()
{
	int post_total = 0, post_per_page = 0;
	int total_page = 0;

	printf("Input the total posts nuumber : ");
	scanf("%d", &post_total);
	printf("\n");

	printf("Input the post per page : ");
	scanf("%d", &post_per_page);
	printf("\n");

	total_page = get_total_post(post_total, post_per_page);

	printf("==== total_page ====\n");
	printf("pages : %d\n", total_page);
	printf("====================\n");
	return 0;
}

int get_total_post(int post_total, int post_per_page)
{
	int n_post_total = post_total, n_post_per_page = post_per_page;
	int ret_total_page = 0;

	if(n_post_total >= post_per_page)
	{
		ret_total_page = post_total / post_per_page;
		if((post_total % post_per_page) > 0)
			ret_total_page += 1;
	}
	else
	{
		ret_total_page = post_total % post_per_page;
	}
	return ret_total_page;
}
