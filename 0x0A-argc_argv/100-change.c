#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints the minimum number of coins to
 *       make change for an amount of money
 * @argc: the number of arrguments suplied to the program
 * @argv: an array of pointers to the argument
 *
 * Return: 0 (succes), 1 (Error)
 */
int main(int argc, char *argv[])
{
int cents, coins = 0;

if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);

while (cents > 0)
{
coins++;
if ((cents - 10) >= 0)
{
cents -= 10;
continue;
}
if ((cents - 5) >= 0)
{
cents -= 5;
continue;
}
if ((cents - 2) >= 0)
{
cents -= 2;
continue;
}
cents--;
}
printf("%d\n", coins);
return (0);
}
