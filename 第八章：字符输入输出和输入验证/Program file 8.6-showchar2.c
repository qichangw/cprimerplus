#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
void display(char cr, int lines, int width);
int main() {
	int ch;
	int rows, cols;

	printf("Enter a character and two intergers:\n");
	while ((ch = getchar()) != '\n')
	{
		if (scanf("%d %d", &rows, &cols) != 2)
			break;
		display(ch, rows, cols);
		while (getchar() != '\n')
			continue;
		printf("Enter another character and two intergers;\n");
		printf("Enter a newline to quit.\n");
	}
	printf("Bye.\n");

}
void display(char cr, int lines, int width)
{
	int row, col;

	for (row = 1; row <= lines; row++)
	{
		for (col = 1; col <= width; col++)
			putchar(cr);
		putchar('\n');
	}
}