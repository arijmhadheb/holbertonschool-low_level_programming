#include "main.h"
#include <string.h>
/**
 *_strstr - a function that locates a substring.
 *@haystack: string
 *@needle: substring
 *Return: returns a pointer to the beginning of the located substring,
 *or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *s = haystack;
	char *sub = needle;

	while (*haystack)
	{
		while (*haystack && *sub && *haystack == *sub)
		{
			haystack++;
			sub++;
		}
		if (!*sub)
			return (s);
		haystack = s + 1;
		sub = needle;
		s = haystack;
	}
	return (NULL);
}
