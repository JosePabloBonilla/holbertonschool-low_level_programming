#include "dog.h"
#include <stdlib.h>

/**
 * *_strcpy - copies string src to buffer pointed to by dest
 * @dest: string pointer
 * @src: buffer pointer
 * Return: dest pointer
 */

char *_strcpy(char *dest, char *src)
{
	int i;

	i = 0;

	while (i >= 0)
	{
		dest[i] = src[i];

		if (src[i] == '\0')
			return (dest);
		i++;
	}
	return (dest);
}

/**
 * new_dog - creates a new dog
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: new_dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *newdog;
	char *newname, *newowner;

	newdog = malloc(sizeof(dog_t));

	if (newdog == NULL || name == NULL || owner == NULL)
		return (NULL);

	newname = malloc(sizeof(char));
	newowner = malloc(sizeof(char));

	if (newname == NULL || newowner == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newname = _strcpy(newname, name);
	newdog->name = newname;

	newowner = _strcpy(newowner, owner);
	newdog->owner = newowner;

	newdog->age = age;

	return (newdog);
}
