#include "main.h"
/**
 *_strlen- finds the length of a string.
 *@s: string pointer to the string whose length is to be found.
 *Return: returns the length of the string.
 */

int _strlen(char *s)
{
	int i;
	int count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		count++;
	}
	return (count);
}
