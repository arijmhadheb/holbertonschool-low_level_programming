#include "main.h"
#include <stdlib.h>
/**
 * str_concat - concatenate two strings using malloc
 * @a: string 1
 * @b: string 2
 * Return: pointer to concat string
 */
char *str_concat(char *a, char *b)
{
    char *c;
    int i, j, z, x;

    if (a == NULL)
        a = "";
    if (b == NULL)
        b = "";
    for (i = 0; a[i] != '\0'; i++)
        ;
    for (j = 0; b[j] != '\0'; j++)
        ;
    c = malloc((i * sizeof(*a)) + (j * sizeof(*b)) + 1);
    if (c == NULL)
        return (NULL);

    for (z = 0, x = 0; *c < (i + j + 1); c++)
    {
        if (*c < i)
            c[z] = a[z];
        else
            c[z] = b[x++];
    }

    return (c);
}
