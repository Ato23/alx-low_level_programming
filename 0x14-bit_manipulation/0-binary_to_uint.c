#include "main.h"

/**
* binary_to_uint - converts the binary number to unsigned int
* @b: string contains the binary number
*
* Return: number converted
*/
unsigned int binary_to_uint(const char *b)
{
unsigned int decimal_value = 0;

if (!b)
return (0);

for (; *b; b++)
{
if (*b != '0' && *b != '1')
return (0);
decimal_value = (decimal_value << 1) | (*b - '0');
}

return (decimal_value);
}
