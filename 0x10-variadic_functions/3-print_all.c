#include <stdio.h>
#include <stdlib.h>
#include "variadic_functions.h"
#include <stdbool.h>

/**
 * print_all - Function that prints anything
 *
 * @format: This is the character format to print a value
 *
 */
void print_all(const char * const format, ...)
{
	va_list vl; /* list to be printed */
	char *string; /* pointer to string, required since the string has to */
	int i;	/* counter for format */

	i = 0;
	va_start(vl, format); /* start count of list accoding to each format */
	while (format != NULL && format[i] != '\0') /*non-empty variables*/
	{
		switch (format[i])/* handle each case one by one */
		{
			case 'i': /* if integer, print and break */
				printf("%i", va_arg(vl, int));
				break;
			case 'f':
				printf("%f", va_arg(vl, double));
				break;
			case 'c':
				printf("%c", (char) va_arg(vl, int));
				break;
			case 's':
				string = va_arg(vl, char *);
				if (string == NULL)
				{
					printf("(nil)");
					break;
				}
				printf("%s", string);
				break;
		}
		if ((format[i] == 'c' || format[i] == 'i' || format[i] == 'f' ||
			format[i] == 's') && format[(i + 1)] != '\0')
			printf(", ");
		i++;
	}
	printf("\n");
	va_end(vl);
}
