 #include "lists.h"

/**
 * add_nodeint - add a new node at the biginning odf the linked list
 * @head: beginning of the list
 * @n: integer
 * Return: address of new element or Null if iit fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *to_add;

	to_add = malloc(sizeof(listint_t));

	if (to_add == NULL)
		return (NULL);

	to_add->n = n;
	to_add->next = *head;
	*head = to_add;

	return (*head);
}
