#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - A function that prints strings, followed by a new line.
 * @separator: The string to be printed between strings.
 * @n: The number of strings passed to the function.
 * @...: An elipse representing the number of unknown argument.
 * Description: If separator is NULL, it is not printed
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list ap;

	char *str;
	unsigned int index;

	va_start(ap, n);

	for (index = 0; index < n; index++)
	{

		str = va_arg(ap, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (index != (n - 1) && separator != NULL)

			printf("%s", separator);

	}

	printf("\n");
	va_end(ap);
}
