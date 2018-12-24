#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	FILE *in, *out;
	errno_t err_in, err_out;
	char str[100];
	int cnt;

	err_in = fopen_s(&in, "C:\\Users\\Hsun\\Desktop\\HW7\\P18\\P18.txt", "r");
	err_out = fopen_s(&out, "C:\\Users\\Hsun\\Desktop\\HW7\\P18\\P18_output.txt", "w");

	while (!feof(in))
	{
		cnt = fscanf_s(in, "%s", str, 10 * sizeof(char));
		if (cnt > 0) fprintf(out, "%s\n", str);
	}
	fclose(in);
	fclose(out);

	system("pause");
	return 0;
}