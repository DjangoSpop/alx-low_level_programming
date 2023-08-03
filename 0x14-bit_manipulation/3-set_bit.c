#include "main.h"

/**
<<<<<<< HEAD
 * set_bit - sets the value of a bit to 1.
 * at a given index.
 * @n: pointer of an unsigned long int.
 * @index: index of the bit.
 *
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned int m;

	if (index > 63)
		return (-1);

	m = 1 << index;
	*n = (*n | m);

	return (1);
=======
 * set_bit - Sets the value of a bit to 1 at a given index.
 * @n: A pointer to the number.
 * @index: The index of the bit to set.
 *
 * Return: 1 if it worked, or -1 if an error occurred.
 */
int set_bit(unsigned long int *n, unsigned int index)
{
    if (index >= (sizeof(unsigned long int) * 8))
        return -1;

    unsigned long int mask = 1UL << index;
    *n = *n | mask;
    return 1;
>>>>>>> refs/remotes/origin/main
}
