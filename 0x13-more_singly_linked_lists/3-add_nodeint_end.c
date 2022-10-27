#include "lists.h"

/**
 * add_nodeint_end - add a new node at the end of a list
 * @head: end of a list
 * @n: integer
 * Return: address of the new element
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *add_node;

	add_node = malloc(sizeof(listint_t));

	if (add_node == NULL)
		return (NULL);
	add_node->n = n;
	add_node->next = *head;
	*head = add_node;

	return (*head);
}
