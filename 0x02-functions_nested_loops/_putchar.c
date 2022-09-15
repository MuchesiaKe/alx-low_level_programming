#include <unistd.h>
#include "main.h"

/**
*_putchar- writes the character c to stdout
* @c: The character to be printed
*
* Return: Returns 1 on success, -1 on error and errno is set appropiately
*/

int _putchar(char c)
{
	return (write(1, &c, 1));
}
