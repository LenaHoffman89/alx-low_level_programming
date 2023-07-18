#include <unistd.h>
/**
 * _putchar - Writes the character c to stdout
 * Return: 1 (Success), -1 (Error), and errno is set
 * appropriately
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
