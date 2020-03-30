#include <stdio.h>

int main() {
	int h, v;
	const double c = 12.0;

	scanf("%d %d", &h, &v);
	printf("%.3f\n", h*v/c);

	return 0;
}