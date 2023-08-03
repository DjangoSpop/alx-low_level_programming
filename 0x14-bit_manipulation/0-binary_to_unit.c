#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer to a string of 0 and 1 chars.
 *
 * Return: The converted number, or 0 if there is one or more chars in the
 *         string b that is not 0 or 1 or if b is NULL.
 */
unsigned int binary_to_uint(const char *b)
{
unsigned int result = 0;
if (b == NULL)
return 0;
for (int i = 0; b[i] != '\0'; i++)
{
if (b[i] == '0')
{
result <<= 1; // Left shift by 1 position (equivalent to multiplying by 2)
}
else if (b[i] == '1')
{
result <<= 1; // Left shift by 1 position
result |= 1;  // Set the least significant bit to 1
}
else
{
return 0; // Return 0 if the input contains characters other than '0' or '1'
        }
}

return result;
}
