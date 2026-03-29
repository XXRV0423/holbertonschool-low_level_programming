#include "lists.h"

/**
 * delete_dnodeint_at_index - deletes the node at index index
 * @head: pointer to pointer of the head
 * @index: index of the node to delete
 *
 * Return: 1 if it succeded, -1 if it failed
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *temp;
	unsigned int i = 0;

	if (head == NULL || *head == NULL)
		return (-1);

	temp = *head;

	/*In case of delete the head*/

	if (index == 0)
	{
		*head = temp->next;
		if (temp->next != NULL)
			temp->next->prev = NULL;

		free(temp);
		return (1);
	}

	while (temp != NULL)
	{
		if (i == index)
		{
			if (temp->prev != NULL)
				temp->prev->next = temp->next;

			if (temp->prev != NULL)
				temp->next->prev = temp->prev;

			free(temp);
			return (1);
		}

		temp = temp->next;
		i++;
	}

	return (-1);
}
