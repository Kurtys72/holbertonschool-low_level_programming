#include <ctype.h>

/**
 * _isalpha - check character
 * @c: integer value
 * Return: always succes(0)
 */
int _isalphar(int c)
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



