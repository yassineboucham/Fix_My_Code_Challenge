#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	dlistint_t *head;

	head = NULL;
	add_dnodeint_end(&head, 4);
	add_dnodeint_end(&head, 5);
	add_dnodeint_end(&head, 9);
	add_dnodeint_end(&head, 13);
	add_dnodeint_end(&head, 24);
	add_dnodeint_end(&head, 9);
	add_dnodeint_end(&head, 42);
	add_dnodeint_end(&head, 9024);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 5);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	printf("-----------------\n");
	delete_dnodeint_at_index(&head, 0);
	print_dlistint(head);
	free_dlistint(head);
	return (0);
}