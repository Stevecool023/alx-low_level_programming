#include "main.h"

/**
 * _strlen_recursion - returns the length of a string
 * @s: string
 * Return: the length of a string
 */
int _strlen_recursion(char *s)
{
if (*s == '\0')
{
return (0);
}
else
return (1 + _strlen_recursion(s + 1));
}
/**
 * comparator - compaes each character of a string.
 * @s: string
 * @n1: smallest itterator
 * @n2: biggest itterator
 * Return: .
 */
int comparator(char *s, int n1, int n2)
{
if (*(s + n1) == *(s + n2))
{
if (n1 == n2 || n1 == n2 + 1)
return (1);
return (0 + comparator(s, n1 + 1, n2 - 1));
}
return (0);
}
/**
 * is_palindrome - detects if a string is palindrome.
 * @s: string
 * Return: 1 if a string is palindrome, 0 if not
 */
int is_palindrome(char *s)
{
if (*s == '\0')
{
return (1);
}
return (comparator(s, 0, _strlen_recursion(s) - 1));
}