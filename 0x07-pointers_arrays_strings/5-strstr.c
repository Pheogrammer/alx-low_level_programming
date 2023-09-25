#include "main.h"
#include <string.h>
/**
 * _strstr - locates a substring.
 * @haystack: string type.
 * @needle: string type.
 * Return: a pointer to the beginning of the located substring.
 */
char *_strstr(char *haystack, char *needle)
{
	char *ptr = strstr(haystack, needle);

	if (ptr != NULL)
		return (ptr);
	else
		return (NULL);
}
