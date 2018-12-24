#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#define ENTER 13
#define MAX 80

int main(void)
{
	FILE *fptr;
	errno_t err;
	char str[MAX], ch;
	int i = 0;

	err = fopen_s(&fptr, "C:\\Users\\Hsun\\Desktop\\HW7\\P16\\P16.txt", "a");

	if (err != 0)
		printf("檔案開啟失敗！\n");
	else
	{
		printf("請輸入字串，按 ENTER 鍵結束輸入：\n");
		while ((ch = getchar()) != '\n' && i < MAX)
			str[i++] = ch;
		putchar('\n', fptr);
		fwrite(str, sizeof(char), i, fptr);
		fclose(fptr);
		printf("\n檔案附加完成！\n");
	}

	system("pause");
	return 0;
}