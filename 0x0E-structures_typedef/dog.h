#ifndef DOG_H
#define DOG_H
#include <stdio.h>
#include <string.h>
/**
 * struct dog - doggy information
 * @name: char input
 * @age: float input
 * @owner: char input
 * dog_t - instance of struct dog
 */
typedef struct dog
{
	char *name;
	float age;
	char *owner;
} dog_t;

#include "main.h"

#endif
