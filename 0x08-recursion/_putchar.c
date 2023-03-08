#include "unistd.h"

/**
 * _putchar - this writes the character c to stdout
 * @c: character to be publish
 * Return: on success 1
 */

int _putchar(char c)
{
        return (write(1, &c, 1));
}
