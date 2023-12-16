#include <stdio.h>


/**
 * main- a program that prints all possible combinations of two digits.
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int firstdigit, secddigit;

	for (firstdigit = 0; firstdigit < 9; firstdigit++)
	{
		for (secddigit = firstdigit + 1; secddigit < 10; secddigit++)
		{
			putchar((firstdigit % 10) + '0');
			putchar((secddigit % 10) + '0');

			if (firstdigit == 8 && secddigit == 9)
			continue;


			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);

}
