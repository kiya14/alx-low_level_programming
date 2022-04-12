#include "main.h"

/**
 * print alphabet - prints the alphabet in lowercase followed by newline
 */
void print_alphabet(void)
{
char letter;

for (letter = 'a'; letter <= 'z'; letter++)
_putchar(letter);

_putchar('\n');
}
