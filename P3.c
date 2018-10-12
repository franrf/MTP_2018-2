// * P3.c * //
// * Francielle Roberta Ferreira * //
// * 11811EEL042 * //

#include <stdio.h>

int main()
{
	int i, j = 0;
	char numero [256];
	
	scanf("%s", numero);
	
	for(i = 0; numero[i] != '\0'; i++)
	{	
		if(numero[i] >= '0' && numero[i] <= '9' ) 
    	{
	    	printf("%d", numero[i] - '0');
			j++;
    	}
	}
	
	if(j == 0)
		printf("0");
	
	return  0;
}	
