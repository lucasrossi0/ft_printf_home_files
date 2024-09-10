#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	char *s = "Lucas";
	printf("Printf: %s Rossi\n", s);
	int i = ft_printf("Ft_printf: %s Rossi\n", s);
	printf("Teste%d\n", i);
	return (0);
}
