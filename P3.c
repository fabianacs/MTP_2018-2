/* P3.c */
/* Fabiana Costa e Silva */
/* 11811EBI019 */

#include <stdio.h>

int main ()
{
	char valor[25],num[25];
	int i, j=0, x;
	scanf("%s", valor);
	for (i=0; valor[i] != '\0'; i++)
		if (valor[i] >= 48 && valor[i] <= 57)
		{
			num[j] = valor[i];
			j++;
		}
	x = atoi(num);
	printf("%d", x);
	return 0;
}
