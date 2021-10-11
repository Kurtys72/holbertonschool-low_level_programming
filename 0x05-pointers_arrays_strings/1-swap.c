#include "main.h"
#include <stdio.h>

/**
* swap_int - Swaps the values of two integers
* @a: integer to swap
* @b: Another integer to swap
* Return: void
*/
void swap_int(int *a, int *b)
{
	int but;

	but = *a;
	*a = *b;
	*b = but;
}
