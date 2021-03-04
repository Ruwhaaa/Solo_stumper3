/*
** EPITECH PROJECT, 2018
** stumper.c
** File description:
** stumper
*/

#include <stdlib.h>
#include <stdio.h>
#include <unistd.h>
#include "include.h"

int stumper(int argv1, int argv2)
{
	int deux = 2;
	int trois = 3;

	while (argv1 <= argv2) {
		if (argv1 == deux && argv1 == trois) {
			printf("FuzzBozz\n");
			argv1 = argv1 + 1;
			deux = 2;
			trois = 3;
		}
		else if (argv1 == deux) {
			printf("Fuzz\n");
			argv1 = argv1 + 1;
			deux = 2;
			trois = 3;
		}
		else if (argv1 == trois) {
			printf("Bozz\n");
			argv1 = argv1 + 1;
			deux = 2;
			trois = 3;
		}
		deux = deux + 2;
		trois = trois + 3;
	}
	return (0);
}
