#include <stdio.h>

int main() {
	int IdadeD, IdadeA, IdadeM;

	scanf("%d", &IdadeD);
	IdadeA = IdadeD/365;
	IdadeM = (IdadeD%365)/30;
	IdadeD = (IdadeD%365)%30;
	printf("%d ano(s)\n%d mes(es)\n%d dia(s)\n", IdadeA, IdadeM, IdadeD);

	return 0;
}