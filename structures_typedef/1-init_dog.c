#include<stdio.h>
#include<stdlib.h>
#include"dog.h"

/**
 * init_dog - prototype
 *@d: pointer
 *@name: dog name.
 *@age: dog age.
 *@owner: dog owner.
 *Return: if its ok return d, else NULL
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	d->name = name;
	d->age = age;
	d->owner = owner;
}

