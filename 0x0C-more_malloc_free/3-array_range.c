#include "main.h"

/**
* array_range - creates an array of integers
* @min: smallest number in the array
* @max: lagrest value in the array
*
* Return: pointer to the address of the memory block
*/

int *array_range(int min, int max)
{
	int *arri;
	int i, j = 0;

	if (min > max)
		return (NULL);
	arri = malloc(sizeof(*arri) * ((max - min) + 1));
	if (arri != NULL)
	{
		for (i = min; i <= max; i++)
		{
			arri[j] = i;
			j++;
		}
		return (arri);
	}
	else
		return (NULL);

}
