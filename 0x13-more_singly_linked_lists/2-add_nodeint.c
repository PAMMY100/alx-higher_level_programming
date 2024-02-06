#include "lists.h"

/*
 * add_nodeint - Adds a new node at the beginning
 * @head: A pointer to the address of the head
 * @n: the integer for the new node to contain
 *
 * Return: NULL if function fails
 * Or address of element
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new;

	new = malloc(sizeof(listint_t));
	if (new == NULL)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
