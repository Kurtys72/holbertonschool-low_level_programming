#include "main.h"
#include <stdio.h>

/**
 * _isupper - check character
 * @c: integer value
 * Return: always succes(0)
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
