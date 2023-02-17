#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN_ELEMENT 1
#define MAX_ELEMENT 1000000

int	sum(int count, ...)
{
	int		sum;
	va_list	args;

	sum = 0;
	va_start(args, count);
	for (int i = 0; i < count; i++)
	{
		sum += va_arg(args, int);
	}
	va_end(args);
	return (sum);
}

int	main(void)
{
	printf("%d", sum(4, 5, 10, 20, 6));
}
