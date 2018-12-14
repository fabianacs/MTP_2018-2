/* P4.c */
/* Fabiana Costa e Silva */
/* 11811EBI019 */

 #include <stdio.h>

 double funcao(float m, float n)
{
	if(m==0)
		return n+1;
	else if(m>0 && n==0)
		return funcao(m-1,1);
	else if(m>0 && n>0)
		return funcao(m-1, funcao(m, n-1));
}
 int main ()
{
	float m, n;
	scanf ("%f %f", &m, &n);
	printf("%g + %g = %g", m, n, funcao(m,n));
	return 0;
}
