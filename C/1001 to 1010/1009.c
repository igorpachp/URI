#include <stdio.h>

int main() {
	const double C = 0.15;
	double S, V;
	char nome[128];

	fgets(nome, sizeof(nome), stdin);
	scanf("%lf %lf", &S, &V);
	printf("TOTAL = R$ %.2lf\n", S + V*C);

	return 0;  
}