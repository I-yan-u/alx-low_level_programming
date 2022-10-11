#include <stdio.h>
#include "dog.h"
#include <stdlib.h>

/**
 * create - to create a memory for a strin
 * @d: the string
 * Return: returns a pointer to the memory
 */

char *create(char *d)
{
	int i, len;
	char *arr;

	if (d == NULL)
		return (NULL);

	len = 0;
	while (d[len] != '\0')
		len++;

	arr = (char *) malloc(len * sizeof(char) + 1);

	if (arr == NULL)
		return (NULL);
	for (i = 0; i < len; i++)
	{
		arr[i] = d[i];
	}
	arr[i] = '\0';

return (arr);
}

/**
 * new_dog - create a dog struct
 * @name: name variable of dog
 * @age: age variable
 * @owner: name variable for owner of dog
 * Return: The dog
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dawg;
	char *dawg_name, *dawg_owner;

	dawg = malloc(sizeof(dog_t));
	if (dawg == NULL)
		return (NULL);

	dawg_name = create(name);
	if (dawg_name == NULL)
	{
		free(dawg);
		return (NULL);
	}

	dawg_owner = create(owner);
	if (dawg_owner == NULL)
	{
		free(dawg_name);
		free(dawg);
		return (NULL);
	}

	dawg->name = dawg_name;
	dawg->age = age;
	dawg->owner = dawg_owner;
	return (dawg);
}

