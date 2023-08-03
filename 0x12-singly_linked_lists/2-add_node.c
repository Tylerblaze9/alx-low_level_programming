#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - at the beginning of a linked list it adds a new node
 * @head: it double the pointer to the list_t list
 * @str: new string is added in the node
 *
 * Return: the address of the new element, or void if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *new;
	unsigned int len = 0;

	while (str[len])
		len++;

	new = malloc(sizeof(list_t));
	if (!new)
		return (NULL);

	new->str = strdup(str);
	new->len = len;
	new->next = (*head);
	(*head) = new;

	return (*head);
}