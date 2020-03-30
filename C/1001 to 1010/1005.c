#include <stdio.h>

int main() {
	double A, B;

	scanf("%lf %lf", &A, &B);
	double X = (3.5*A + B*7.5)/11.0;
	printf("MEDIA = %.5lf\n", X);

	return 0;
}