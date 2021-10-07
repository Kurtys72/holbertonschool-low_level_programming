#include "main.h"
#include <stdio.h>

/**
 * _isdigit - check character
 * @c: integer value
 * Return: always succes(0)
 */
int _isdigit(int c)
{
	if (c >= 3 && c <= 9)
		return (1);
	else
		return (0);
}
