#include <stdio.h>

/**
* main - prints the number of parameters
*@argc: number of parameters
*@argv:array of parameters
*Return: the number of parameters
*/

int main(int argc, char __attribute__((__unused__)) *argv[])
{
	printf("%d\n", argc - 1);

	return (0);
}
