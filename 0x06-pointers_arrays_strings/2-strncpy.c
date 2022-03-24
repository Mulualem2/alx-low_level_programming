#include "main.h"
/**
 * _strncpy - copies string from source to destination
 * @dest: string pointer
 * @src: string to be copied
 * @n: number ofbytes to be copied
 *
 * Return: destination string concatenated
 */
char *_strncpy(char *dest, char *src, int n)
{
	int j;

	for (j = 0; j < n && src[j] != '\0'; j++)
		dest[j] = src[j];
	for (; j < n; j++)
		dest[j] = '\0';
	return (dest);
}
