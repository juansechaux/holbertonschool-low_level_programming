#include<stdio.h>
#include<stdlib.h>
#include"dog.h"

/**
 * print_dog - prototype
 *@d: pointer
 *Return: if its ok return d, else NULL
 */

void print_dog(struct dog *d)
{
	if (d != NULL)
	{
		if (d->name == NULL)
			printf("(nil)");
		else if (d->name != NULL)
			printf("Name: %s\n", d->name);
		if (d->age == '\0')
			printf("(nil)");
		else if (d->age != '\0')
			printf("Age: %.6f\n", d->age);
		if (d->owner == NULL)
			printf("(nil)");
		else if (d->owner != NULL)
			printf("Owner: %s\n", d->owner);
	}
}

