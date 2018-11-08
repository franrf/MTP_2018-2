// * P4.c * //
// * Francielle Roberta Ferreira * //
// * 11811EEL042 * //

#include <stdio.h>

int ackerman(int o, int p)
{
	if(o == 0)
		return p + 1;
		
	else if(o > 0 && p == 0) 
		return ackerman(o - 1, 1);
		
	else
		return ackerman(o - 1, ackerman(o, p - 1));
}

int main()
{
	int m, n;
	
	printf("Insira o valor de m: "); scanf("%i", &m);
	printf("\nInsira o valor de n: "); scanf("%i", &n);
	printf("\nFuncao: %i ", ackerman(m, n));
	
	return 0;
}
