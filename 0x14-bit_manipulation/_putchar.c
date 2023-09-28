#include "main.h"
#include <unistd.h>
/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * One error, -1 is returend, and errno is set appropriately
 */
 int_putchar(char c)
{
	return (write(1,&c, 1))

}
