#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include"dog.h"

/**
 * free_dog - prototype
 *@d: dog name.
 *Return: if its ok return d, else NULL
 */

void free_dog(dog_t *d)
{
	if (d != NULL)
	{
	free(d->name);
	free(d->owner);
	}
}

