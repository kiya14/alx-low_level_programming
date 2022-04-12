#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @c: The number of which the sign will be printed.
 *
 * Return: 1 if the number is grater than zero,
 *         0nif the number is zero'
 *         root@7034b366295a:~/alx-low_level_programming/0x02-functions_nested_loops# cat > 5-sign.c
#include "main.h"

/**
 * print_sign - prints the sign of a number.
 * @c: The number of which the sign will be printed.
 *
 * Return: 1 if the number is grater than zero,
 *         0 if the number is zero,
 *         -1 if the number is less than zero.
 */
int print_sign(int n)
{
if (n > 0)
{
_putchar('+');
return (1);
}
else if (n == 0)
{
_putchar('0');
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
