#include "lists.h"
/**
 * *find_listint_loop - finds the loop in a linked list
 * @head: pointer to first node
 * Return: address of the node where the loop starts, or NULL
 * if there is no loop
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *mac = head;
	listint_t *cheese = head;

	if (!head)
		return (NULL);
	while (mac && cheese && cheese->next)
	{
		cheese = cheese->next->next;
		mac = mac->next;

		if (cheese == mac)
		{
			mac = head;
			while (mac != cheese)
			{
				mac = mac->next;
				cheese = cheese->next;
			}
			return (cheese);
		}
	}
	return (NULL);
}
