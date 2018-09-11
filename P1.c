// * P1.c * //
// * Francielle Roberta Ferreira * //
// * 11811EEL042 * //

#include <stdio.h>

int main()
{
	int estado = 0, i;
	char bits [256];
	
	scanf("%s", bits);
	
	for(i = 0; bits[i] != '\0'; i++)
	{
		if(bits[i] == '0')
		{
			if(estado == 0)
				estado = 0;
			
			else if(estado == 1)
				estado = 2;
			
			else
				estado = 1;
		}
		
	
		else
		{
			if(estado == 0)
				estado = 1;
			
			else if(estado == 1)
				estado = 0;
				
			else
				estado = 2;		
		}
	}	
	
	if(estado == 0)
		printf("\n%s eh multiplo de 3!", bits);
		
	else 
		printf("\n%s nao eh multiplo de 3!", bits);
		
	return 0;
}
