#include "main.h"
/**
 *_strncat - concatenates two strings
 *@dest: A pointer to a character that will be changed
 *@src: A pointer to a character that will be changed
 *@n: value
 *@Return: dest
 */

char *_strncat(char *dest, char *src, int n);

{
int x, y;
for (x = 0; dest[x] != '\n'; x++)
{
for (y = 0; src[y] != '\0' && n > 0; y++, n--, x++)
{
dest[x] = src[y];
}
return (dest);
}
