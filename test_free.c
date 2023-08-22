#include "main.h"
/**
 * test_free - variadic function to free n pointers
 * @n: number of pointers to free
 * @...: pointers to free
 * Return: void
*/
void test_free(int n, ...)
{
	va_list args;
	int i = 0;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		void **ptr = va_arg(args, void **);

		if (*ptr != NULL && ptr != NULL)
		{
			free(*ptr);
			*ptr = NULL;
		}
	}
	va_end(args);
}
