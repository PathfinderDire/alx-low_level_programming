#include "main.h"
#include <string.h>
#include <stdlib.h>
#include <stdio.h>
/**
 * str_concat - concatenates 2 strings
 * @s1: 1st string
 * @s2: 2nd string
 *
 * Return: pointer to new conc string
 */

char *str_concat(char *s1, char *s2)
{
    int q,i = 0, p, j = 0, l = 0, m = 0;
    char *ptr = (char *) malloc(sizeof(char) * (strlen(s1)));
    char *ptr2 = (char *) malloc(sizeof(char) * (strlen(s2)) + 1);

    p = strlen(s1);
    q = strlen(s2);
    if (ptr == NULL) {
        printf("Can't allocate memory\n");
        return (NULL);
    };
    if (ptr2 == NULL) {
        printf("Can't allocate memory\n");
        return (NULL);
    };

	if ((ptr != NULL) && (ptr2 != NULL))
	{
    while (s1[i] != '\0') {
        ptr[i] = s1[i];
        i++;
    };
    while (s2[j] != '\0') {
        ptr2[j] = s2[j];
        j++;
    };

    l = p;
    while (m <= (p + q)) {
        ptr[l] = ptr2[m];
        l++;
        m++;
    };
    return (ptr);};
	if (ptr == NULL)
		return (ptr2);
 if (ptr2 == NULL)
		return (ptr);
 else return (NULL);
