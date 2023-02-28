#include "main.h"

/**
 * swap_int - Swaps the value of two integers.
 * @a: The first integer to be swapped.
 * @b: The second iteger to be swapped.
 * Return: nothing
 */
void swap_int(int *a, int *b)
/*the fuction that prints the value of two pointers.*/
{
int temp = *a;
*a = *b;
*b = temp;
}
