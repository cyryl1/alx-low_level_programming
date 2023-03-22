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
	f(name);
}

void print_to_console(char *name)
{
	printf("Hello, %s!\n", name);
}

int main()
{
	char *name = "Alice";
	print_name(name, print_to_console);
	return (0);
}
