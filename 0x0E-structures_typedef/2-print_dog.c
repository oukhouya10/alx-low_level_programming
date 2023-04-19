#include "dog.h"
#include <stdio.h>

/**
 * print_dog -  function that prints a struct dog
 *@d:the dog
 */
void print_dog(struct dog *d)
{
	if (d)
	{
		printf("Name: %s\n", d->name ? d->name : "(nil)");
		printf("Age: %f\n", d->age);
		printf("owner: %s\n", d->owner ? d->owner : "(nil)");
	}
}
