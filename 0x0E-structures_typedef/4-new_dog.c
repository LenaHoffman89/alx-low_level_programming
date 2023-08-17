#include "dog.h"
#include <stdlib.h>
/**
 * _strlen - return length of string
 * @s: string to evaluate
 * Return: length of string
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
 * *_strcpy - copies string pointed to by src
 * @dest: pointer to buffer
 * @src: string to be copied
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	int i, len;

	len = 0;
	while (src[len] != '\0')
	{
		len++;
	}
	for (i = 0; i < len; i++)
	{
		dest[i] = src[i];
	}
	dest[i] = '\0';
	return (dest);
}
/**
 * *new_dog - creates a new dog.
 * @name: name of dog
 * @age: age of dog
 * @owner: owner of dog
 * Return: pointer to new dog (success), NULL if otherwise
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;
	int i, j;

	i = _strlen(name);
	j = _strlen(owner);
	dog = malloc(sizeof(dog_t));
	if (dog == NULL)
		return (NULL);
	dog->name = malloc(sizeof(char) * (i + 1));
	if (dog->name == NULL)
	{
		return (NULL);
		free(dog);
	}
	dog->owner = malloc(sizeof(char) * (j + 1));
	if (dog->owner == NULL)
	{
		return (NULL);
		free(dog);
		free(dog->name);
	}
	_strcpy(dog->name, name);
	_strcpy(dog->owner, owner);
	dog->age = age;

	return (dog);
}
