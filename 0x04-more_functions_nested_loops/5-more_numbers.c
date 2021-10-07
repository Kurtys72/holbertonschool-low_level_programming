#include "main.h"

/**
 * more_numbers - printing more
 *
 */
void more_numbers(void)
{
	int a, z;

	for (a = 0; a < 10; a++)
	{
		for (z = 0; z <= 14; z++)
		{
			if (z > 9)
			{
				_putchar((z / 10) + '0');
			}

			_putchar((z % 10) + '0');
		}

		_putchar('\n');
	}
}
