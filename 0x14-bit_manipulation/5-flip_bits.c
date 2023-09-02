#include "main.h"

/**
* flip_bits - Counts the number of differing bits between two numbers.
* @n: The first number.
* @m: The second number.
*
* Return: The count of bits that need to be flipped to convert 'n' to 'm'.
*/
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
int i, bitCount = 0;
unsigned long int current;
unsigned long int xorResult = n ^ m;

for (i = 63; i >= 0; i--)
{
current = xorResult >> i;

if (current & 1)
{
bitCount++;
}
}

return (bitCount);
}
