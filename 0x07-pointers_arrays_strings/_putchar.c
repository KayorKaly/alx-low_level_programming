#include <unistd.h>
#include "main.h"

/**
 * _putchar - write anything here
 * @c: Anything here
 *
 * Return: anything
 */
int _putchar(char c)
{
  return (write(1, &c, 1));
}
