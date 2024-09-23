#include <stdio.h>
#include "ft_printf.h"
#include <limits.h>

int main(void)
{
	char *s = "Lucas";
	printf("Printf: %s Rossi\n", s);
	int i = ft_printf("Ft_printf: %s Rossi\n", s);
	printf("Teste%d\n", i);
	ft_printf("FTprintf: %d\n", i);
	int n1 = -1;
	int n3 = 0;
	int nMax = INT_MAX;
	int nMin = INT_MIN;
	long int lMax = LONG_MAX;
	long int lMin = LONG_MIN;
	float n2 = 12.65;
	printf("N1: %i\n", n1);
	printf("N2: %d\n", (int) n2);
	ft_printf("FTprintf n1: %d\n", n1);
	ft_printf("FTprintf n3: %d\n", n3);
	ft_printf("FTprintf nMax: %d\n", nMax);
	ft_printf("FTprintf nMin: %d\n", nMin);
	ft_printf("FTprintf lMax: %d\n", lMax);
	ft_printf("FTprintf lMin: %d\n", lMin);
	ft_printf("FTprintf: %d\n", (int) n2);
	printf("Testing percentage %%\n");
	ft_printf("FT Testing percentage %%\n");
	unsigned int teta = 42;
	printf("Testing u %u\n", teta);
	ft_printf("FT Testing u %u\n", teta);
	printf("printf hex lower test: %x\n", teta);
	ft_printf("FT_printf hex lower test: %x\n", teta);
	printf("printf hex UPPER test: %X\n", teta);
	ft_printf("FT_printf hex UPPER test: %X\n", teta);
	printf("printf teta address: %p\n", &teta);
	ft_printf("FT_printf teta address: %p\n", &teta);
	printf("PRINTFNull pointer: %p\n", NULL);
	ft_printf("FT_PRINTFNull pointer: %p\n", NULL);
	return (0);
}
