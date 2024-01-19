#include "main.h"

/**
*string_nconcat - Concatenates two strings using at
*
*@s1:  string 1
*@s2:  string 2
*@n: The maximum number of bytes of s2 to concatenate to s1.
*
*Return: If the function fails - NULL.
*Otherwise - a pointer to the concatenated space in memory.
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

        char *cat;
        unsigned int j = n, d;

        if (s1 == NULL)
                s1 = "";

        if (s2 == NULL)
                s2 = "";

        for (d = 0; s1[d]; d++)
                j++;

        cat = malloc(sizeof(char) * (j + 1));

        if (cat == NULL)
                return (NULL);

        j = 0;

        for (d = 0; s1[d]; d++)
                cat[j++] = s1[d];

        for (d = 0; s2[d] && d < n; d++)
                cat[j++] = s2[d];

        cat[j] = '\0';

        return (cat);
}
