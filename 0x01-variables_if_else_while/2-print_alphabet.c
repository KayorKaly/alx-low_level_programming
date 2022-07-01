#include <stdio.h>
#include <ctype.h>
/**
*main - Program to print alphabet letter followed by new line
*Prints alphabets in small case
*Return: return 0
*/
int main(void)
{
int alph;

for (alph = 'a'; alph <= 'z'; alph++)
{
alph = tolower(alph);
putchar(alph);
}
putchar('\n');
return (0);
}
