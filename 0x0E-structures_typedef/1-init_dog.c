#include <stdlib.h>
#include "main.h"

/**
 * init_dog - initializes a variable of type struct dog
 * @riko: pointer to struct dog to initialize
 * @name: name to initialize
 * @age: age to initialize
 * @owner: owner to initialize
 */
void init_dog(struct dog *riko, char *name, float age, char *owner)
{
	if (riko == NULL)
		riko = malloc(sizeof(struct dog));
	riko->name = name;
	riko->age = age;
	riko->owner = owner;
}
