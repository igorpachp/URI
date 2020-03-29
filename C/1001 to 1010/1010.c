#include <stdio.h>

int main() {
	int cod, num;
	double val, total;

	scanf("%d %d %lf", &cod, &num, &val);
	total = num * val;
	scanf("%d %d %lf", &cod, &num, &val);
	total += num * val;
	printf("VALOR A PAGAR: R$ %.2lf\n", total);

	return 0;
}