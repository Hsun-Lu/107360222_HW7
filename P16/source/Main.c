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
		printf("�ɮ׶}�ҥ��ѡI\n");
	else
	{
		printf("�п�J�r��A�� ENTER �䵲����J�G\n");
		while ((ch = getchar()) != '\n' && i < MAX)
			str[i++] = ch;
		putchar('\n', fptr);
		fwrite(str, sizeof(char), i, fptr);
		fclose(fptr);
		printf("\n�ɮת��[�����I\n");
	}

	system("pause");
	return 0;
}