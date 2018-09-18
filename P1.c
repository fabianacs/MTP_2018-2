/* P1.c */
/* Fabiana Costa e Silva */
/* 11811EBI019 */

#include <stdio.h>

int main()
{
	int estado = 0, i = 0;
	char bits[256];
	printf ("Digite a sequencia: ");
	scanf ("%s", bits);
	while (bits[i] != '\0')
	{
		if (estado == 0 && bits[i] == '1')
			estado++;
		else if (estado == 1 && bits[i] == '1')
			estado--;
		else if (estado == 1 && bits[i] == '0')
			estado++;
		else if (estado == 2 && bits[i] == '0')
			estado--;
		i++;
	}
	if (estado == 0)
		printf ("'%s' eh multiplo de 3!", bits);
	else 
		printf ("'%s' nao eh multiplo de 3!", bits);
	return 0;
}
