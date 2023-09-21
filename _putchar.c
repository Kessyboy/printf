#include "main.h"

/**
* _putchar - prints parameters
* @c: character parameter
* Return: (0)  always
*/

int _putchar(int c)
{
	return (write(1, &c, 1));
}
