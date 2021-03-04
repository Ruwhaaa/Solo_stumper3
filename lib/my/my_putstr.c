/*
** EPITECH PROJECT, 2017
** my_putstr.c
** File description:
**
*/

#include "include.h"

int my_putstr(char const *str)
{
	int a = 0;

	while (str[a] != '\0') {
		my_putchar(str[a]);
		a++;
	}
	return (0);
}
