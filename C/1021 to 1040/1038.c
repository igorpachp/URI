#include <stdio.h>

int main() {
	int code, qnt;
	float price;

	scanf("%d %d", &code, &qnt);
	switch (code) {
		case 1:
			price = 4*qnt;
			break;
		case 2:
			price = 4.5*qnt;
			break;
		case 3:
			price = 5*qnt;
			break;
		case 4:
			price = 2*qnt;
			break;
		case 5:
			price = 1.5*qnt;
			break;
	}
	printf("Total: R$ %.2f\n", price);

	return 0;
}