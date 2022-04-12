#include "main.h"

/**
 * print_sign - prints the sign of a number.
<<<<<<< HEAD
 * @n: The number of which the sign will be printed.
=======
 * @c: The number of which the sign will be printed.
>>>>>>> 424cb94cbf2f67b4834c1e1fdc4e3cf7e895a217
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
_putchar('0);
return (0);
}
else
{
_putchar('-');
return (-1);
}
}
