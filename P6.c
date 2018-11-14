// * P6.c * //
// * Francielle Roberta Ferreira * //
// * 11811EEL042 * //

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#define pi 3.14159265359
#define r 1

typedef struct 
{
	float x;
	float y;
}Ponto;

Ponto *gera_pontos(int N)
{
	int i;
	Ponto *p = (Ponto *)calloc(N,sizeof(Ponto));
        
	printf("\n");
	
	for (i = 0; i < N; i++)
	{
		p[i].x = cos(i*2.0*M_PI/(N-1));
		p[i].y = sin(i*2.0*M_PI/(N-1));
		printf("(%.3f, %.3f) ",p[i].x,p[i].y);
	}
	return p;
}

int main() 
{
	unsigned int N;
	Ponto *p;
    
	printf("",N);
	scanf("%d",&N); 
	getchar();
    
	p = gera_pontos(N);
	free(p);
    
	return 0;
}
