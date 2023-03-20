#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include "d_struct.c"

/** size_t print_dlistint(cont dlistint_t *h) **/

int main(void)
{
	dlistint_t *head;
	dlistint_t *new;
	dlistint_t hello = {8, NULL, NULL};
	

	head = &hello;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
	{
		dprintf(2, "Error: Can't malloc\n");
		return(1);
	}
	new->n = 9;
	head->prev = new;
	new->next = head;
	new->prev = NULL;
	
	printf("%d\n", new->0);
	printf("%d\n", hello.n);

	return (0);
}


