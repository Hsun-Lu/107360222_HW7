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
		printf("�ɮ׶}�ҥ��ѡI�I\n");
	else
	{
		while ((ch = getc(fptr)) != EOF)
		{
			printf("%c", ch);
			count++;
		}
		fclose(fptr);
		printf("\n�`�@��%d�Ӧr��\n", count);
	}

	system("pause");
	return 0;
}