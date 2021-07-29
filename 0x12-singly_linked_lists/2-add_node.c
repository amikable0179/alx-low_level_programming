#include "lists.h"

/**
 * add_node - function to add a new node at the beginning of list_t
 * @head: pointer to the pointer to list_t
 * @str: pointer to string to copy on to the node
 * Return: address of new element or null if not successful
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *addn;
	int a;

	addn = malloc(sizeof(list_t));
	if (addn == NULL)
		return (NULL);

	for (a = 0; str[a] != '\0'; a++)
		;

	addn->str = strdup(str);

	if (addn->str == NULL)
	{
		free(addn);
		return (NULL);
	}
	addn->len = a;
	addn->next = *head;
	*head = addn;
	return (*head);
}
