/* P3.c */
/* Fabiana Costa e Silva */
/* 11811EBI019 */

#include <stdio.h>

int main ()
{
	char valor[25];
	int i, x=0;
	scanf("%s", valor);
	for (i=0; valor[i] != '\0'; i++)
		if (valor[i] >= 48 && valor[i] <= 57)
		{
			x = x*10 + (valor[i] - '0');
		}
	printf("%d", x);
	return 0;
}
