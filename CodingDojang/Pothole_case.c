#include <stdio.h>

int camele_to_pothole(char *src, char *dest);

int main()
{
	char *strCameleCase = "cameleCase";
	//char *strCameleCase = "cameleCaseHahahaWelcome";
	char pothole_case[50] = {0,};

	camele_to_pothole(strCameleCase, pothole_case);

	printf("To Pothole case : %s\n", pothole_case);

	return 0;
}

int camele_to_pothole(char *src, char *dest)
{
	int idx = 0, dest_idx = 0;

	while(src[idx] != '\0')
	{
		//대문자이면 대문자와 그 뒤의 문자들을 1칸씩 이동,
		if((src[idx] >= ('a' - 32)) && (src[idx] <= ('z' - 32) ))
		{
			//
			dest[dest_idx] = '_';
			dest_idx++;
			dest[dest_idx] = src[idx];
			dest_idx++; idx++;
		}
		else
		{
			dest[dest_idx] = src[idx];
			dest_idx++; idx++;
		}
	}

	return 0;
}