#include <stdio.h>
#include "main.h"
/**
 * set_string - Function to set a value of a pointer to a char
 * @s: The pointer
 * @to: The char
 */
void set_string(char **s, char *to)
{
	*s = to;
}
