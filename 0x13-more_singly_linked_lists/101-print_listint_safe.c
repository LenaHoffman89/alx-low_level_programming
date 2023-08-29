#include "lists.h"
size_t looped_listint_len(const listint_t *head);
/**
 * looped_listint_len - counts number of unique nodes in
 * looped listint_t lists
 * @head: pointer to first node
 * Return: number of unique nodes or 0 if list not looped
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *tom, *jerry;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);
	tom = head->next;
	jerry = (head->next)->next;

	while (jerry)
	{
		if (tom == jerry)
		{
			tom = head;
			while (tom != jerry)
			{
				nodes++;
				tom = tom->next;
				jerry = jerry->next;
			}
			tom = tom->next;
			while (tom != jerry)
			{
				nodes++;
				tom = tom->next;
			}
			return (nodes);
		}
		tom = tom->next;
		jerry = (jerry->next)->next;
	}
	return (0);
}
/**
 * print_listint_safe - prints a listint_t linked list
 * @head: pointer to first node
 * Return: number of nodes in the list
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (nodes);
}
