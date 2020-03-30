#include <stdio.h>

int main(void) {
	double R;
	const double PI = 3.14159;

	scanf("%lf", &R);
	printf ("VOLUME = %.3lf\n", PI*R*R*R*4.0/3.0);

	return 0;
}