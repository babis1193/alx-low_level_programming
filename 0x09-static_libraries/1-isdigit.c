#include "main.h"
/**
*_isdigit - function that checks if a given  character is a digit
*@c: tested character
*Return: returns 1 id its a digit, else 0
*/

int _isdigit(int c)
{
if ((c >= 48) && (c <= 57))
return (1);

return (0);
}
