#include "main.h"

/**
* clear_bit - Sets the value of a specified bit to 0 at a given index.
* @n: Pointer to the number to modify.
* @index: The index of the bit to clear (0-based index).
*
* Return: 1 on success, -1 on failure or if the index is out of range.
*/
int clear_bit(unsigned long int *n, unsigned int index)
{
if (index > 63)
return (-1); 

*n = (~(1UL << index) & *n);
/* Clear the bit at the given index */
return (1); 
}

