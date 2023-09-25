#include "main.h"

/**
 * set_string -  sets the value of a pointer to a char.
 * @s: pointer to pointer.
 * @to: char type.
 */
void set_string(char **s, char *to)
{
	*s = to;
}
