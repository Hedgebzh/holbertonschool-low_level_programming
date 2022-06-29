
#ifndef HEADER
#define HEADER

#include <stdio.h>

/**
 * struct dog - first struct
 * @name: name
 * @age: age
 * @owner: owner
 *
 */
struct dog
{
	char *name;
	float age;
	char *owner;
};

void init_dog(struct dog *d, char *name, float age, char *owner);

#endif

