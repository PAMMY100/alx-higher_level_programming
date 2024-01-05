#include "main.h"
/**
 * reverse_array - function that reverse the content of an array
 * @a: function parameter
 * @n: function parameter
 * Return: reverse of array
 */

void reverse_array(int *a, int n)
{
	int i = 0;
	int s = n - 1;

	while (i < s)
	{
		int x = a[i];

		a[i] = a[s];
		a[s] = x;

		i++;
		s--;
	}
}
