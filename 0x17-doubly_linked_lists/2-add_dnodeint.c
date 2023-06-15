#include "lists.h"

/**
 * add_dnodeint - adds a new node to the dlistint_t list's beginning
 * @head: pointer to head
 * @n: node data
 *
 * Return: the new node's address or NULL if it fails
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (!new)
		return (NULL);

	new->n = n;
	new->prev = NULL;

	if (*head)
		(*head)->prev = new;

	new->next = *head;
	*head = new;

	return (new);
}
