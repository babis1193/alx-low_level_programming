#include "main.h"

/**
 * malloc_checked - allocates memory using malloc
 * @b: input integer
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *pontr;

	pontr = malloc(b);
	if (pontr == NULL)
		exit(98);
	return (pontr);
}
