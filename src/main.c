/*
** EPITECH PROJECT, 2018
** main.c
** File description:
** main
*/

#include <stdio.h>
#include <unistd.h>
#include "include.h"
#include <stdlib.h>

int main(int argc, char **argv)
{
	if (argc == 1) {
		return (84);
	}
	if (argc > 3) {
		return (84);
	}
	arg_error(argc, argv);
	return (0);
}

int arg_error(int argc ,char **argv)
{
	int argv1 = atoi(argv[1]);
	int argv2 = atoi(argv[2]);

	if (argv1 <= argv2) {
		stumper(argv1, argv2);
	}
	if (argv1 > argv2) {
		return (84);
	}
	return (0);
}
