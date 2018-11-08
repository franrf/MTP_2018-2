// * P5.c * //
// * Francielle Roberta Ferreira * //
// * 11811EEL042 * //

#include <stdio.h>

typedef
	unsigned long long int
Bytes8;

typedef
	struct LCG{ Bytes8 a, c, m, rand_max, atual; }
LCG;

void semente(LCG*r, Bytes8 seed){
	//constantes do POSIX [de]rand48, glibc [de]rand48[_r]
	//ULL transforma a constante 'int' em 'unsigned long long int'
	r->a = 0x5DEECE66DULL;
	r->c = 11ULL;
	r->m = (1ULL << 48);
	r->rand_max = r->m - 1;
	r->atual = seed;
}

Bytes8 lcg_rand(LCG*r){
	r->atual = (r->a * r->atual + r->c) % r->m;
	return r->atual;
}

double lcg_rand_01(LCG * r){
	return ((double) lcg_rand(r))/(r->rand_max);
}

void gera_numeros(float * vetor, int tam, float min, float max, LCG*r)
{
	int i;
	for(i = 0; i < tam; i++)
	vetor[i] = (max - min)*lcg_rand_01(r) + min;
}

float soma(float *inicio_vetor, float *fim_vetor)
{
	float A = 0;
	float *parc = inicio_vetor;
	
	while(parc != fim_vetor)
		{
			A = A + *parc;
			parc++;
		}
		
	return A;
}

float produto(float *inicio_vetor, float *fim_vetor)
{
	float B = 1;
	float *parc = inicio_vetor;
	
	while(parc != fim_vetor)
		{
			B = B * *parc;
			parc++;
		}
		
	return B;
}

int main()
{
	LCG random; 
	semente(&random, 123456);
	
	int op;
	float vet[50];
	
	printf("Serao gerados 50 numeros aleatorios.\n\n");
	printf("Digite uma opcao valida: \n\n1 - Somatorio \n2 - Produtorio\n\n");
	scanf("%i", &op);
	
	gera_numeros(vet, 50, 0.5, 1.5, &random);
	
	if(op == 1)
		printf("\n%f", soma(vet, vet + 50)); 
	
	if(op == 2)
		printf("\n%f", produto(vet, vet + 50));

	return 0;
}
