#include "main.h"

/**
 * _sqrt_recursion - function that returns a square root
 * @n: function parameter
 * Return: square root number
 */

int _sqrt_recursion(int n)
{
	int start;
	int end;

	if (start > end)
	{
		return (-1);
	}
	int mid = (start + end) / 2;
	int midS = mid * mid;

	if (midS == n)
	{
		return (mid);
	}
	else if (midS < n)
	{
		return (_sqrt_recursion(n, mid + 1, end));
	}
	else
	{
		return (_sqrt_recursion(n, start, mid - 1));
	}
}
