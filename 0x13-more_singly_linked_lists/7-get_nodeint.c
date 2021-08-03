#include "lists.h"

/**
 * get_nodeint_at_index - function to find nth node in a list
 * @head: the pointer to the list
 * @index: the node to find
 * Return: n or null
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *get;
	unsigned int a = 0;

	if (head != NULL)
	{
		get = head;
		while (get != NULL)
		{
			if (a == index)
				return (get);
			get = get->next;
			a++;
		}
	}
	return (NULL);
}
