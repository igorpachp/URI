#include <stdio.h>

int main() {
	double N;
	int n100, n50, n20, n10, n5, n2;
	int m100, m50, m25, m10, m5, m1;

	scanf ("%lf", &N);
	n100 = N/100;
	n50 = (N - n100*100)/50;
	n20 = (N - n100*100 - n50*50)/20;
	n10 = (N - n100*100 - n50*50 - n20*20)/10;
	n5 = (N - n100*100 - n50*50 - n20*20 - n10*10)/5;
	n2 = (N - n100*100 - n50*50 - n20*20 - n10*10 - n5*5)/2;
	N = (N - n100*100 - n50*50 - n20*20 - n10*10 - n5*5 - n2*2)*100;
	m100 = N/100;
	m50 = (N - m100*100)/50;
	m25 = (N - m100*100 - m50*50)/25;
	m10 = (N - m100*100 - m50*50 - m25*25)/10;
	m5 = (N - m100*100 - m50*50 - m25*25 - m10*10)/5;
	m1 = (N - m100*100 - m50*50 - m25*25 - m10*10 - m5*5);

	printf("NOTAS:\n");
	printf("%d nota(s) de R$ 100.00\n", n100);
	printf("%d nota(s) de R$ 50.00\n", n50);
	printf("%d nota(s) de R$ 20.00\n", n20);
	printf("%d nota(s) de R$ 10.00\n", n10);
	printf("%d nota(s) de R$ 5.00\n", n5);
	printf("%d nota(s) de R$ 2.00\n", n2);
	printf("MOEDAS:\n");
	printf("%d moeda(s) de R$ 1.00\n", m100);
	printf("%d moeda(s) de R$ 0.50\n", m50);
	printf("%d moeda(s) de R$ 0.25\n", m25);
	printf("%d moeda(s) de R$ 0.10\n", m10);
	printf("%d moeda(s) de R$ 0.05\n", m5);
	printf("%d moeda(s) de R$ 0.01\n", m1);

	return 0;
}