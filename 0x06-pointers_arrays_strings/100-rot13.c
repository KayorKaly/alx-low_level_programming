#include "main.h"
/**
 * rot13 - function that encode a string in rot13
 * @n: poiineter that stores character
 *
 * Return: character
 */
char *rot13(char *n)
{
int i, k;
char c[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
char t[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIHKLM";

for (i = 0; n[i] != '\0'; i++)
{
for (k = 0; c[k] != '\0'; k++)
{
if (n[i] == c[k])
{
n[i] = t[k];
break;
}
}
}
return (n);
}
