#include "lists.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * free_list - rees the list
 * @head: parametr of list
 *
 * Return: nothing
 */
void free_list(list_t *head)
{
	if (head)
	{
		free_list(head->next);
		if (head->str)
		{
			free(head->str);
		}
		free(head);
	}
}
