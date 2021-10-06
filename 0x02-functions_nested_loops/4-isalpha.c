#include <ctype.h>

/**
 * _isaalpha - check character
 * @c: integer value
 * Return: always succes(0)
 */
int _isalpha(c)
{
	if (isalpha(c))
	{
		return (1);
	}
	else
	{
		return (0);
	}
}


