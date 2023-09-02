#include "main.h"

/**
* set_bit - Sets a specific bit to 1 at a given index in a number.
* @n: Pointer to the number to modify.
* @index: The index of the bit to set to 1 (0-based index).
*
* Return: 1 on success, -1 on failure.
*/
int set_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1);

*n = ((1UL << index) | *n);
/* Set the bit at the given index to 1 */
return (1);
}

