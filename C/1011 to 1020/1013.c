#include <stdio.h>

int maior(int a, int b) {
	return (a + b + (((a - b) < 0) ? ((a - b) * -1) : (a - b))) / 2;
}

int main() {
	int A, B, C;

	scanf("%d %d %d", &A, &B, &C);
	printf("%d eh o maior\n", maior(A, maior(B, C)));

	return 0;
}