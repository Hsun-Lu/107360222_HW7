#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *fptr1, *fptr2;
	errno_t err1, err2;
	char ch;

	err1 = fopen_s(&fptr1, "C://Users/Hsun/Desktop/HW7/P15/P15.txt", "r");
	err2 = fopen_s(&fptr2, "C://Users/Hsun/Desktop/HW7/P15/P15_output.txt", "w");

	if ((err1 != 0) || (err2 != 0))
		printf("檔案開啟失敗！！\n");
	else
	{
		while ((ch = getc(fptr1)) != EOF)
			putc(ch, fptr2);
		fclose(fptr1);
		fclose(fptr2);
		printf("檔案拷貝完成！！\n");
	}

	system("pause");
	return 0;
}