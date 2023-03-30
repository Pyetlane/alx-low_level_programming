#include "lists.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * Hare_tort - prints textd before main is executed
 */
void Hare_tort(void) __attribute__ ((constructor));
/**
 * Hare_tort - entry point
 */
void Hare_tort(void)
{
	printf("You're beat! and yet, you must allow,\n");
	printf("I bore my house upon my back!\n");
}
