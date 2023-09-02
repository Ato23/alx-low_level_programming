#include "main.h"
#include <unistd.h>

/**
* _putchar - writes the character c to stdout
* @c: to print the character
*
* Return: On 1 on succes
* On error return 1 and errno is set appropriately.
*/
int _putchar(char c)
{
static int count;
static char buffer[1024];

if (count == 1024)
{
write(1, buffer, count);
count = 0;
}

buffer[count++] = c;

return (1);
}
