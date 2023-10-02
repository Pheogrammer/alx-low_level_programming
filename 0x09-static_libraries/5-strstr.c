#include "main.h"
/**
 *_strstr - locates a substring
 *
 *@haystack:string scanned
 *@needle:substring to look for
 *
 *Return:pointer to beginning of substring,NULl instead
 */
char *_strstr(char *haystack, char *needle)
{
	char *scanned = haystack;
	char *sub = needle;

	while (*haystack)
	{
		while (*needle)
		{
			if (*haystack++ != *needle++)
			{
				break;
			}
		}
		if (!*needle)
		{
			return (scanned);
		}
		needle = sub;
		scanned++;
		haystack = scanned;
	}
	return (0);
}
