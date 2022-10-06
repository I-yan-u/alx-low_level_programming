#include "main.h"

/**
 * _strlen - lenght of a string
 * @str: the string
 *
 * Return: the lenght of the string
 */

int _strlen(char *str)
{
	int len = 0;

	while (str[len] != '\0')
	{
		len++;
	}
return (len);
}


/**
 * string_nconcat - concatenates strings to the nth number
 * @s1: the first string
 * @s2: second string
 * @n: number of s2 to add to s1
 * Return: the joint string
 */


char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	unsigned int j, i, sum, len1, len2;
	char *conc;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	len1 = _strlen(s1);
	len2 = _strlen(s2);

	if (n >= len2)
		sum = len1 + len2 + 1;
	else
	{
		sum = len1 + n + 1;
		len2 = n;
	}

	conc = malloc(sum);
	if (conc == NULL)
		return (NULL);
	
	i = 0;
	while (i < len1)
	{
		conc[i] = s1[i];
		i++;
	}
	j = 0;
	while (j < len2)
	{
		conc[i + j] = s2[j];
		j++;
	}
	conc[i + j] = '\0';
	return (conc);
}

