#include "main.h"

/**
 * _abs - computes the asolute value of an integer
 * @c: the number to be computed
 * Return: absolute number of value or zero
 */

int _abs(int c)
{
if (c < 0)
{
int abs_val;

abs_val = c * -1;
return (abs_val);
}
return (c);
}
