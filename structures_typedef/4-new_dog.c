#include <stdlib.h>
#include "dog.h"

/**
 * new_dog - creates a new dog_t structure.
 * @name: name of the dog.
 * @age: age of the dog.
 * @owner: owner of the dog.
 * Return: pointer to the new dog_t structure or NULL if it fails.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
char *name_copy, *owner_copy;
int i, name_len = 0, owner_len = 0;

while (name[name_len++])
	;
while (owner[owner_len++])
	;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
return (NULL);

name_copy = malloc(sizeof(char) * name_len);
if (name_copy == NULL)
{
free(new_dog);
return (NULL);
}
owner_copy = malloc(sizeof(char) * owner_len);
if (owner_copy == NULL)
{
free(name_copy);
free(new_dog);
return (NULL);
}
for (i = 0; i < name_len; i++)
name_copy[i] = name[i];
for (i = 0; i < owner_len; i++)
owner_copy[i] = owner[i];

new_dog->name = name_copy;
new_dog->age = age;
new_dog->owner = owner_copy;
return (new_dog);
}
