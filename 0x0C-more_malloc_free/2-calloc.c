#include "main.h"

/**
* _calloc - allocate memory using malloc and initialize it to zero
*@nmemb: number of elements
*@size: size of the memory block to be allocated
*
*Return: void
*/
void *_calloc(unsigned int nmemb, unsigned int size)
{
	char *pntr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	pntr = malloc(nmemb * size);
	if (pntr != NULL)
	{
		for (i = 0; i < (nmemb * size); i++)
			pntr[i] = 0;
		return (pntr);
	}
	else
		return (NULL);
}
