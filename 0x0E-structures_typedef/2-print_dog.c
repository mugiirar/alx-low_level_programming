#include "main.h"
#include "dog.h"

void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		printf("");
	}
	if (d.name == NULL)
	{
		printf("Name: (nil)\n");
	}
	if (d.age == NULL)
	{
		printf("age: (nil)\n");
	}
	if (d.owner == NULL)
	{
		printf("owner: (nil)\n");
	}
	if (d.name)
	{
		printf("Name: %S", d->name);
	}
	if (d.age)
	{
		printf("Age: %d", d->age);
	}
	if (d.owner)
	{
		printf("Owner: %s", d->owner);
	}
}
