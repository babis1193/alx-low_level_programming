#include "main.h"
/**
*_isupper - this verifies if a character is uppercase or not
*@c: character to be tested
*Return: it returns 1 if it is uppercase , else 0
*/

int _isupper(int c)
{
	if ((c >= 'A') && (c <= 'Z'))
		return (1);

	return (0);
}
