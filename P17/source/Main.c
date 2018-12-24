#include <stdio.h>
#include <stdlib.h>
#define MAX 80

int main(void)
{
	FILE *fptr;
	errno_t err;
	char str[MAX];
	int bytes;

	err = fopen_s(&fptr, "C:\\Users\\Hsun\\Desktop\\HW7\\P17\\P17.txt", "r");

	while (!feof(fptr))
	{
		bytes = fread(str, sizeof(char), MAX - 1, fptr);
		str[bytes] = '\0';
		printf("%s\n", str);
	}
	fclose(fptr);

	system("pause");
	return 0;
}
