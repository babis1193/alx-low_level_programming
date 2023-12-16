#include <stdio.h>


/**
 * main- a program that prints all possible different combinations of two digits.
 * Numbers must be separated by ,, followed by a space
 * The two digits must be different
 * 01 and 10 are considered the same combination of the two digits 0 and
 *
 * Return: Always 0.
 *
 */

int main(void)
{
	int firstdigit, seconddigit;

	for (firstdigit = 0; firstdigit < 9; firstdigit++)
	{
		for (seconddigit = firstdigit + 1; seconddigit < 10; seconddigit++)
		{
			putchar((firstdigit % 10) + '0');
			putchar((seconddigit % 10) + '0');

			if (firstdigit == 8 && seconddigit == 9)
			continue;


			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);

}
