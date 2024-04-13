#include <stdio.h>
#include <stdlib.h>

int main()
{
	int n, i, *ptr;

	printf("Enter total no of values");
	scanf("%d", &n);

	ptr = (int *)malloc(sizeof(int) * n);
	printf("Enter values: \n");

	for (i = 0; i < n; i++)
		scanf("%d", (ptr + i));

	printf("\nThe entered values are:");

	for (i = 0; i < n; i++)
		printf("%d", *(ptr + i));
	printf("\naddress of the pointer: %p", &(*ptr));

	free (ptr);
	return (0);
}
