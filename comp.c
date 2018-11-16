/* P6.c */
/* Fabiana Costa e Silva */
/* 11811EBI019 */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

struct ponto
{
	double x;
	double y;
};

//POR QUE TEM Q COLOCAR STRUCT EM TUDO???
struct ponto *gerar (int n) //Pq o nome tem *?
{
	struct ponto *p = (struct ponto*) malloc(n*sizeof(struct ponto)); //Alocação dinâmica da memória
	int i;
	printf ("\n\nOs pontos gerados sao: \n");
	for (i=0; i<n; i++)
	{
		(*p).x = cos(i*2.0*M_PI/(n-1));
		(*p).y = sin(i*2.0*M_PI/(n-1));
		printf ("(%.3lf, %.3lf) \n", (*p).x, (*p).y);
	}
	return p;
}

int main ()
{
	struct ponto *p; //Declaração da struct como ponteiro, para usar alocação dinâmica
	int n;
	printf ("Digite o numero de pontos que deseja encontrar: ");
	scanf ("%d", &n);
	getchar();
	p = gerar(n); // ???
	free(p); //Libera a memória
	return 0;
}
