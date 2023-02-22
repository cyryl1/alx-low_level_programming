#include "main.h"
/**
 * print_to_98 - to print all natural numbers to 98
 * @n: the number to be printed from
 */
void print_to_98(int n)
{
    while (n != 98) {
        /* print current number */
        if (n < 0) {
            _putchar('-');
            n = -n;
        }
        if (n >= 10)
            print_to_98(n / 10);
        _putchar(n % 10 + '0');

        /* print separator */
        _putchar(',');
        _putchar(' ');

        /* update number */
        if (n < 98)
            n++;
        else
            n--;
    }

    /* print last number */
    if (n < 0) {
        _putchar('-');
        n = -n;
    }
    if (n >= 10)
        print_to_98(n / 10);
    _putchar(n % 10 + '0');

    /* print newline */
    _putchar('\n');
}
