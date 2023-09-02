#include "main.h"

/**
* get_bit - Get the value of a bit at a given index in a decimal number
* @n: The decimal number
* @index: The index of the bit to retrieve
*
* Return: The value of the bit at the given index, or -1 if an error occurs.
*/
int get_bit(unsigned long int n, unsigned int index)
{
int bit_value;

if (index > 48)
/* Check if the index is within the valid range for a 64-bit number */
return (-1);

bit_value = (n >> index) & 1;
/* Right-shift n to the target bit and mask with 1 to get the bit value */

return (bit_value);
}

