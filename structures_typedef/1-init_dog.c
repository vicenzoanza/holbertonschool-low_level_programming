#include "dog.h"
#include <stddef.h>
/**
 * init_dog - initializes a variable of type struct dog.
 * @d: pointer to struct dog.
 * @name: pointer to name string.
 * @age: age value.
 * @owner: pointer to owner string.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d != NULL)
{
d->name = name;
d->age = age;
d->owner = owner;
}
else
return;
}
