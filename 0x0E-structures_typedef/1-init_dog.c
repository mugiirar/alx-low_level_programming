#include "dog.h"
#include "main.h"
/**
 * init_dog -  a function that initialize a variable of type struct
 * dog
 * @d: pointer to the struct
 * @name: char inout
 * @age: float input
 * @owner: char input
 * Return: Nothing
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		d = malloc(sizeof(struct dog));
	d->name = name;
	d->age = age;
	d->owner = owner;
}
