
Skip to content

    Pricing

Sign in
Sign up
luischaparroc /
holbertonschool-low_level_programming
Public

Code
Issues
Pull requests 2
Actions
Projects
Security

    Insights

holbertonschool-low_level_programming/0x10-variadic_functions/2-print_strings.c
@luischaparroc
luischaparroc Fix: it prints the new line
Latest commit 540c1d0 on 27 Jul 2019
History
1 contributor
34 lines (28 sloc) 572 Bytes
#include "variadic_functions.h"

/**
 * print_strings - prints strings.
 * @separator: string to be printed between the strings.
 * @n: number of strings passed to the function.
 *
 * Return: no return.
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int i;
	char *str;

	va_start(valist, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(valist, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n - 1)
			if (separator)
				printf("%s", separator);
	}

	printf("\n");
	va_end(valist);
}
