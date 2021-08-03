#include "lists.h"

/**
 * free_listint - function to free list
 * @head: pointer to the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *freeh;

	while (head != NULL)
	{
		freeh = head;
		head = head->next;
		free(freeh);
	}
}
