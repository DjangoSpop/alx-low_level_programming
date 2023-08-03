#include "main.h"

/**
 * clear_bit - Sets the value of a bit to 0 at a given index.
 * @n: A pointer to the number.
 * @index: The index of the bit to clear.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
    if (index >= (sizeof(unsigned long int) * 8))
        return -1;

    unsigned long int mask = 1UL << index;
    mask = ~mask; // Invert the mask to have a 0 at the index and 1s elsewhere
    *n = *n & mask;
    return 1;
}
