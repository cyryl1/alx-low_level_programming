#include <stdio.h>
#include <stdlib.h>
#include "function_pointers.h"
/**
 * print_name - f points to either func in main
 * @name: name
 * @f: pointer to print upp or non upp func
 * @Return: void
 */
void print_name(char *name, void (*f)(char *))
{
	if (name != 0 && f != 0)
		f(name);
}
