#include "main.h"
/**
 * _strlen - Finds and returns the length of a string.
 * @s: String pointer to the string whose length is to be found.
 * Return: returns the length of the string.
 */
int _strlen(char *s)
{
	int p = 0;
	
	while (*s != '\0')
	{
		p++;
		s++;
	}
	return (p);
}
