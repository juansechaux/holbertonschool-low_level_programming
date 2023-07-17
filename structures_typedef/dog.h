#ifndef DOG_H
#define DOG_H

/**
 * struct dog - struct de perro.
 *@name: name of the dog.
 *@age: age of the dog.
 *@owner: owner of the dog.
 */

typedef struct dog
{
	char *name;
	float age;
	char *owner;

} dog;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);

#endif

