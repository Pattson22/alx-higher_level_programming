#include "lists.h"

/**
* check_cycle - Check for a cycle in a linked list.
* @list: Head of the linked list.
*
* Description: This function checks for the presence of a cycle
* in a linked list using the Floyd's Tortoise and Hare algorithm.
*
* Return: 1 if a cycle is detected, 0 if there is no cycle.
*/
int check_cycle(listint_t *list)
{
	listint_t *slow, *fast;

	if (!list)
	{
	return (0);
	}

	fast = list->next;


	while (fast && slow && fast->next)
	{
	if (slow == fast)
	{

	return (1);
	}


	slow = slow->next;

	fast = fast->next->next;
	}

	return (0);
}
