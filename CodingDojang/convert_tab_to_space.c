#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define WIDTH_TAB 4

int convert_tab_to_space(FILE *fp);

int main(void)
{
	FILE *fp = NULL;
	char *file_name = "./check_code.c";

	/* 파일의 내용을 지우고 읽어들임 */
	//fp = fopen(file_name,"w+");
	/* 파일의 내용을 지우지않고 읽어들임. */
	fp = fopen(file_name,"r+");

	convert_tab_to_space(fp);

	fclose(fp);
return 0;
}

int convert_tab_to_space(FILE *fp)
{
	char ch = 0, prev_ch = 0;
	int size = 0;
	char *backup_buffer = NULL;
	int size_backup_buffer = 0;
	int pos_tab = 0, pos_tab_end = 0, pos_tab_start = 0;
	char ch_space = 32;//공백문자
	int i = 0, indent_newline_flag = 0, n_tab_count = 0;
	char cur_ch = 0;

	if(fp == NULL)
	{
		printf("file pointer is NULL!!\n");
		return -1;
	}

	//Get file's size
	fseek(fp, 0, SEEK_END);
	size = ftell(fp) + 1;

	//rewind file offset, and read file's character.
	rewind(fp);
	printf("offset : %ld, size :%d\n", ftell(fp), size);

	while(1)
	{
		fread(&ch, sizeof(ch), sizeof(char), fp);
		printf("[%ld] %c\n", ftell(fp), ch);
	
		/* 이전 문자가 \n이었고 현재 문자가 \t이면 공백으로 대체*/
		if(prev_ch == '\n' && ch == '\t')
		{
			printf("Check tab character~~\n");
			indent_newline_flag = 1;
			//fseek(fp, -1, SEEK_CUR);
			
			pos_tab = ftell(fp) - 1;

			/* tab의 갯수를 샌다. */
			n_tab_count = 1;
			fseek(fp, pos_tab+1, SEEK_SET);
			while(1)
			{
				fread(&cur_ch, sizeof(char), 1, fp);
				if(cur_ch == '\t')
				{
					n_tab_count++;
				}
				else
				{
					break;
				}
			}

			{
				pos_tab_end = pos_tab + n_tab_count;//tab 다음 문자의 offset  : tab offset + tab갯수
				
				fseek(fp, 0, SEEK_END);
				size = ftell(fp) + 1;

				size_backup_buffer = size - pos_tab_end;//size - (pos_tab + n_tab_count);	//복사할 길이 : 파일 내의 문자갯수 - tab 다음문자의 offset
				fseek(fp, pos_tab_end, SEEK_SET);
			}

			//탭을 공백으로 바꾼후 복사를 위해 백업용으로 탭 이후의 문자들을 저장함.
			backup_buffer = (char *)malloc(size_backup_buffer);
			memset(backup_buffer, 0, size_backup_buffer);
			fread(backup_buffer, sizeof(char), size_backup_buffer, fp);

			//백업한 문자열 확인.
			printf("==== print backup_buffer[%d][%d:%d:%d] ====\n", n_tab_count, size_backup_buffer, size, pos_tab_end);
			for(i = 0; i < size_backup_buffer; i++)
			{
				printf("%c", backup_buffer[i]);
			}
			printf("\n=================================\n");


			//백업한 문자부터 들어가게될 공백문자의 뒤로 이동한 뒤 백업문자들을 복사해서 붙임.
			fseek(fp, pos_tab + (WIDTH_TAB * n_tab_count), SEEK_SET);
			fwrite(backup_buffer, sizeof(char), size_backup_buffer, fp);

			//탭의 시작위치로 이동해서 탭을 공백문자로 바꿔서 저장함.
			fseek(fp, pos_tab, SEEK_SET);
			for(i = 0; i < (WIDTH_TAB * n_tab_count); i++)
			{
				fwrite(&ch_space, sizeof(char), 1, fp);
			}
			printf("@@[%d][%d]\n", ch, prev_ch);
			free(backup_buffer);
		}

		//fread를 하면 offset이 읽은 만큼 증가하기 때문에 fseek()필요없음.
		//fseek(fp, 1, SEEK_CUR);
		//fread(&prev_ch, sizeof(prev_ch), sizeof(char), fp);
		prev_ch = ch;

		/* FILE의 끝에 도달하면 */
		//if(ftell(fp) == size)
		if(feof(fp))
		{
			printf("End of file~\n");
			break;
		}
	}

return 0;
}

