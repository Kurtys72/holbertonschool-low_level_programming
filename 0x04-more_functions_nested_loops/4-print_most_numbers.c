#include "main.h"

/**
* print_numbers- printing
* Return: always succes(0)
*/
void print_most_numbers(void)
{
	int z;
	for (z = 0; z <= 9; z++)
		if (z != 2 && z != 4)
		{
			_putchar (z + '0');
		}
	_putchar ('\n');
}
