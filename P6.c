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
} Ponto;

int main()
{
    int N, i;
    Ponto *xy;

    scanf("%i", &N);
    getchar();
    
    xy= (Ponto *) malloc(N*sizeof(Ponto));
    printf("%i retorna \" ",N);
    
    for(i=0; i<N; i++)
    {
        xy->x= r*cos(i*2*pi/(N));
        xy->y= r*sin(i*2*pi/N);
        printf("(%.3f, %.3f) ", xy->x, xy->y);
    }
    
    printf("\" ");
    free(xy);
    return 0;
}
