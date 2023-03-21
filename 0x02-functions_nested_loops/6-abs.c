#include "main.h"

/**
 * _abs - checks for absolute value
 *
 * @a: parameter to be checkered
 *
 * Return: always a
 */

int _abs(int a)
{
	if (a < 0)
		a = -(a);
	else if (a >= 0)
		a = a;
	return (a);
}
