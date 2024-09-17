#include <stdio.h>
#include "ft_printf.h"

int main(void)
{
	char *s = "Lucas";
	printf("Printf: %s Rossi\n", s);
	int i = ft_printf("Ft_printf: %s Rossi\n", s);
	printf("Teste%d\n", i);
	ft_printf("FTprintf: %d\n", i);
	int n1 = 10;
	float n2 = 12.65;
	printf("N1: %i\n", n1);
	printf("N2: %f\n", n2);
	ft_printf("FTprintf: %d\n", n1);
	ft_printf("FTprintf: %d\n", (int) n2);
	return (0);
}
