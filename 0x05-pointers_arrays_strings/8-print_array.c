#include "main.h"
/**
*print_array - print n element of array
*@a: array
*@n: number of elements
*Return: nothing
*/
void print_array(int *a, int n)
{
int ary;
for (ary = 0; ary < n ; ary++)
{
if (ary != n - 1)
printf("%d, ", a[ary]);
else
printf("%d", a[ary]);

}
printf("\n");
}
