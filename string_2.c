#include "shell.h"

/**
 * _str1 - concatenate two strings
 * @mos: char pointer the dest of the copied str
 * @off: const char pointer the source of str
 * Return: the mos
 */
char *_str1(char *mos, const char *off)
{
	int f;
	int j;

	for (f = 0; mos[f] != '\0'; f++)
		;

	for (j = 0; off[j] != '\0'; j++)
	{
		mos[f] = src[j];
		f++;
	}

	mos[f] = '\0';
	return (mos);
}
/**
 * *_str2 - Copies the string pointed to by src.
 * @mos: Type char pointer the dest of the copied str
 * @off: Type char pointer the source of str
 * Return: the mos.
 */
char *_str2(char *mos, char *off)
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
 * _str3 - Function that compares two strings.
 * @str1: type str compared
 * @str2: type str compared
 * Return: Always 0.
 */
int _str3(char *str1, char *str2)
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
 * _str4 - locates a character in a string,
 * @r: string.
 * @t: character.
 * Return: the pointer to the first occurrence of the character t.
 */
char *_str4(char *r, char t)
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
 * _str5 - gets the length of a prefix substring.
 * @i: initial segment.
 * @acc: accepted bytes.
 * Return: the number of accepted bytes.
 */
int _str5(char *i, char *acc)
{
	int o, p, exx;

	for (o = 0; *(i + o) != '\0'; o++)
	{
	exx = 1;
	for (p = 0; *(acc + p) != '\0'; p++)
	{
	if (*(i + o) == *(acc + p))
	{
	exx = 0;
	break;
	}
	}
	if (exx == 1)
	break;
	}
	return (o);
}

