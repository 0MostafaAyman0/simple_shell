#include "shell.h"

/**
 * _strcat - concatenate two strings
 * @mos: char pointer the dest of the copied str
 * @off: const char pointer the source of str
 * Return: the mos
 */
char *_strcat(char *mos, const char *off)
{
	int f;
	int j;

	for (f = 0; mos[f] != '\0'; f++)
		;

	for (j = 0; off[j] != '\0'; j++)
	{
		mos[f] = off[j];
		f++;
	}

	mos[f] = '\0';
	return (mos);
}
/**
 * *_strcpy - Copies the string pointed to by src.
 * @mos: Type char pointer the dest of the copied str
 * @off: Type char pointer the source of str
 * Return: the mos.
 */
char *_strcpy(char *mos, char *off)
{

	size_t q;

	for (q = 0; off[q] != '\0'; q++)
	{
		mos[q] = off[q];
	}
	mos[q] = '\0';

	return (mos);
}
/**
 * _strcmp - Function that compares two strings.
 * @str1: type str compared
 * @str2: type str compared
 * Return: Always 0.
 */
int _strcmp(char *str1, char *str2)
{
	int w;

	for (w = 0; str1[w] == str2[w] && str1[w]; w++)
	;

	if (str1[w] > str2[w])
		return (1);
	if (str1[w] < str2[w])
		return (-1);
	return (0);
}
/**
 * _strchr - locates a character in a string,
 * @r: string.
 * @t: character.
 * Return: the pointer to the first occurrence of the character t.
 */
char *_strchr(char *r, char t)
{
	unsigned int m = 0;

	for (; *(r + m) != '\0'; m++)
		if (*(r + m) == t)
			return (r + m);
	if (*(r + m) == t)
		return (r + m);
	return ('\0');
}
/**
 * _strspn - gets the length of a prefix substring.
 * @i: initial segment.
 * @acc: accepted bytes.
 * Return: the number of accepted bytes.
 */
int _strspn(char *i, char *acc)
{
	int o, p, bool;

	for (o = 0; *(i + o) != '\0'; o++)
	{
	bool = 1;
	for (p = 0; *(acc + p) != '\0'; p++)
	{
	if (*(i + o) == *(acc + p))
	{
	bool = 0;
	break;
	}
	}
	if (bool == 1)
	break;
	}
	return (o);
}

