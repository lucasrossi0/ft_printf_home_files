#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	char *s = "teste";
	printf("Printf: %s\n", s);
	ft_printf("Ft_printf: %s\n", s);
	return (0);
}
