#include <stdio.h>

int main() {
	int N, H;
	double V;

	scanf("%d %d %lf", &N, &H, &V);
	printf("NUMBER = %d\nSALARY = U$ %.2lf\n", N, H*V);

	return 0;
}