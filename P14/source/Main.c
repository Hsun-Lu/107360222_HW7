#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fptr;
	char ch;
	int count = 0;
	errno_t err;

	err = fopen_s(&fptr, "C://Users/Hsun/Desktop/HW7/P14/P14.txt", "r");

	if (err != 0)
		printf("檔案開啟失敗！！\n");
	else
	{
		while ((ch = getc(fptr)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n總共有%d個字元\n", count);
	}

	system("pause");
	return 0;
}