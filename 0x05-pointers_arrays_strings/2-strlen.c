#include "main.h"
#include <stdio.h>

/**
* _strlen - Returns the length of a string
* @s: String
*
* Return: String length
*/
int _strlen(char *s)
{
	int n;

	for (n = 0; *s != '\0'; s++)
	{
		n++;
	}

	return (n);
}
