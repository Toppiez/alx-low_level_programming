#include "main.h"
/**
 * _strcat - appends the src to the dest string,
 * overwriting the terminating null byte(\0) at the end of dest
 * and then adds a terminating null byte
 * @dest: string to append by src
 * @src: string to append to dest
 * Return: a pointer to the resulting string dest
 */
char *_strcat(char *dest, char *src)
{
	int i, j;

	i = j = 0;
	while (*(dest + i))
		i++;
	while ((*(dest + i) = *(src + j)))
	{
		i++;
		j++;
	}
	return (dest);
}
