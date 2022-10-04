#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * str_concat - Joins 2 strings
 * @s1: fisrt string
 * @s2: second string
 *
 * Return: an array ponting to the joint string
 */

char *str_concat(char *s1, char *s2)
{
	unsigned int lens1, lens2, i, j, len;
	char *arr;

	lens1 = 0;
	lens2 = 0;
	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	while (*(s1 + lens1) != '\0')
	{
		lens1++;
	}
	while (*(s2 + lens2) != '\0')
	{
		lens2++
	}

	len = lens1 + lens2;
	arr = (char *) malloc(len * sizeof(char) + 1);

	if (arr == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < lens1; i++)
	{
		a[i] = s1[i];
	}
	for (i = 0; i < lens2; i++)
	{
		a[i + lens1] = s2[i];
	}

	return (arr);
}
