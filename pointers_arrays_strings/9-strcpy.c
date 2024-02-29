#include "main.h"
/**
 *_strcpy -  copies the string pointed.
 *@dest: destination of pointer
 *@src: the strin
 *Return: void
 */
char *_strcpy(char *dest, char *src)
{
	char *L = dest;

	while (*src != '\0')
	{
		*dest = *src;
		src++;
		dest++;
	}
	*dest = '\0';
	return (L);
}
