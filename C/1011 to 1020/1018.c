#include <stdio.h>

int main (void)
{
	unsigned N, n100, n50, n20;
	unsigned n10, n5, n2, n1;

	scanf ("%d", &N);
	n100 = N/100;
	n50 = (N%100)/50;
	n20 = ((N%100)%50)/20;
	n10 = (((N%100)%50)%20)/10;
	n5 = ((((N%100)%50)%20)%10)/5;
	n2 = (((((N%100)%50)%20)%10)%5)/2;
	n1 = (((((N%100)%50)%20)%10)%5)%2;
	printf("%u\n", N);
	printf("%u nota(s) de R$ 100,00\n", n100);
	printf("%u nota(s) de R$ 50,00\n", n50);
	printf("%u nota(s) de R$ 20,00\n", n20);
	printf("%u nota(s) de R$ 10,00\n", n10);
	printf("%u nota(s) de R$ 5,00\n", n5);
	printf("%u nota(s) de R$ 2,00\n", n2);
	printf("%u nota(s) de R$ 1,00\n", n1);

	return 0;
}