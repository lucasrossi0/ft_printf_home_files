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
	printf("N2: %d\n", (int) n2);
	ft_printf("FTprintf: %d\n", n1);
	ft_printf("FTprintf: %d\n", (int) n2);
	printf("Testing percentage %%\n");
	ft_printf("FT Testing percentage %%\n");
	unsigned int teta = 42424242;
	printf("Testing u %u\n", teta);
	ft_printf("FT Testing u %u\n", teta);
	return (0);
}
