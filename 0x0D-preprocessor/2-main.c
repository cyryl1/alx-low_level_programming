#include <stdio.h>
#include <stdlib.h>
#include "main.h"
/**
 * main - to print the file fom which it was compiled from;
 * return: void
 */
int main(void)
{
	printf("%s\n", __FILE__);
	return (0);
}
