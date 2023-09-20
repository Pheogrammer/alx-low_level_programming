#include "main.h"
/**
 *cap_string - capitalizes each word of a string
 *
 *@s:pointer to char params
 *
 *Return:*s
 */
char *cap_string(char *s)
{
	int i, j;
	char delimiters[] = " \t\n,;.!?\"(){}";

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[0] >= 97 && s[0] <= 122)
		{
			s[0] = s[0] - 32;
		}
		for (j = 0; delimiters[j] != '\0'; j++)
		{
			if (s[i] == delimiters[j] && s[i + 1] >= 97 && s[i + 1] <= 122)
			{
				s[i + 1] = s[i + 1] - 32;
			}
		}
	}
	return (s);
}
