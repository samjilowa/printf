#include <unistd.h>
#include "main.h"

/**
 * sam_charwriter - Writes a character to the standard output
 * @c: The character to be written
 *
 * Return: The number of characters written
 */

int sam_charwriter(char c)
{
	write(1, &c, 1);
	return (1);
}
