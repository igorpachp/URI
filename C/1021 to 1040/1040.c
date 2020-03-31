#include <stdio.h>

int main (void)
{
	int i = 0;
	double a ,b, c, d;
	double media;

	scanf ("%lf %lf %lf %lf ", &a, &b, &c, &d);
	media = 2*a + 3*b + 4*c + d;
	media /= 10.0;
	printf ("Media: %.1lf\n", media);
	if (media >= 7.0)
		printf ("Aluno aprovado.\n");
	else if (media < 5.0)
		printf ("Aluno reprovado.\n");
	else
	{
		printf ("Aluno em exame.\n");
		scanf ("%lf", &a);
		printf ("Nota do exame: %.1lf\n", a);
		media = (a+media)/2;
		(media >= 5) ? printf ("Aluno aprovado.\n") : printf ("Aluno reprovado.\n");
		printf("Media final: %.1lf\n", media);
	}

	return 0;
}