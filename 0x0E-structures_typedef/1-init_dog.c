#include <stdlib.h>
#include "dog.h"


	/**
	 * init_dog - Entry to a variable of type struct dog
	 * @d: pointer to struct dog to the entry
	 * @name: name to initialize
	 * @age: age to initialize
	 * @owner: ownerentry
	 */

	void init_dog(struct dog *d, char *name, float age, char *owner)
	{
		d->name = name;
		d->age = age;
		d->owner = owner;
	}
