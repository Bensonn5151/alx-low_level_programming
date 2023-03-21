#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0(success)
 */
int main()
{
	int i, j;
	for (i =1; i<=5; i++)
	{
		for (j =1;j <=i; j++)
		{
			printf("_putchar\n");
		}
	}
	return 0;
}
