#include "main.h"
/**
 * _strncat - like _strcat but it will use n bytes from src
 * @dest: string to be concatenated
 * @src: string to be concatenated until n limit
 * @n: number of bytes that will be used from src
 * Return: pointer to the resulting string dest
 */

char *_strncat(char *dest, char *src, int n)

{
int i, j;

i = 0;
while (dest[i] != '\0')
{
i++;
}

j = 0;
while (j < n && src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}

dest[i] = '\0';

return (dest);
}
