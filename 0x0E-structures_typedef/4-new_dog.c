#include "dog.h"
#include <stdlib.h>

/**
 * _strlen - show string length
 * @s: string
 * Return: 1 on success
 */

int _strlen(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	return (i);
}

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

	newname = malloc(_strlen(name) + 1);

	if (newname == NULL)
	{
		free(newdog);
		return (NULL);
	}

	newowner = malloc(_strlen(owner) + 1);

	if (newowner == NULL)
	{
		free(newdog->name);
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
