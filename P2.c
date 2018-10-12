// * P2.c * //
// * Francielle Roberta Ferreira * //
// * 11811EEL042 * //

#include <stdio.h>

void bin_dec(char v[])
{
	int inv[256], i, j, k, l, soma = 0;

	for (i = 0; v [i] != '\0'; i++)
	{}

	for (j = i - 1; j >= 0; j--)
	{
		k = 1;

		if(v[j] == '0')
		{
			inv[j] = 0;
		}

		else
		{
			for(l = 0; l <= i - j - 2; l++)
			{
				k = k * 2;
			}
		
		inv[j] = k;
		}
	
	soma = soma + inv[j];
	}
	
	printf ("O numero em decimal eh: %d",soma);
	printf ("\n");
}

void bin_hex(char v[])
{
	int inv[256], l[256], soma = 0, i, j, k, n, r;

	for (i = 0;v [i] != '\0';i++)
	{}

	for (j = i-1 ;j >= 0; j--)
	{
		k = 1;
		
		if(v[j] == '0')
		{
			inv[j] = 0;
		}
	
		else
		{
			for(n = 0 ; n <= i - j - 2; n++)
			{
				k = k * 2;
			}
			
		inv[j] = k;
		}
	
	soma = soma + inv[j];
	}
	
	for (i = 0; soma >= 1; i++)
	{
		l[i] = soma % 16;
		soma = soma / 16;
	}
	
	printf ("O numero em hexadecimal eh: ");
	
	for (r = i - 1; r >= 0; r--)
	{ 
		if (l[r] <= 9)
		{
			printf ("%d",l[r]);
		}
		
		if (l[r] > 9)
		{
			l[r] = l[r] + 55; 
			printf ("%c",l[r]);
		}
	}

	printf ("\n");
}

void hex_dec(char v[])
{
	int inv[256], i, j, k, l, soma = 0;

	for (i = 0; v[i] != '\0'; i++)
	{ 
		if (v[i] >= 'a' && v[i] <= 'z')
		{
			v[i] = v[i] - 32;
		}
	}

	for (j = i - 1; j >= 0; j--)
	{
		k = 1;
		
		if(v[j] == '0')
		{
			inv[j] = 0;
		}
		
		else
		{
			for(l = 0; l <= i - j - 2; l++)
			{
				k = k * 16;
			}
		
			if (v[j] >= '0' && v[j] <= '9')
			{
				inv[j] = k * (v[j] - 48);
			}

			if (v[j] >= 'A' && v[j] < 'Z')
			{
				inv[j] = k * (v[j] - 55);
			}
		}

	soma = soma + inv[j];
	}

	printf ("O numero em decimal eh: %d",soma); 
	printf ("\n");
}

void hex_bin (char v[])
{
	int inv[256], i, j, k, l, soma = 0;

	for (i = 0; v[i] != '\0'; i++)
	{ 
		if (v[i] >= 'a' && v[i] <= 'z')
		{
			v[i] = v[i] - 32;
		}
	}

	for (j = i - 1; j >= 0; j--)
	{
		k = 1;
		
		if(v[j] == '0')
		{
			inv[j] = 0;
		}
		
		else
		{
			for(l = 0; l <= i - j - 2; l++)
			{
				k = k * 16;
			}
			
			if (v[j] >= '0' && v[j] <= '9')
			{
				inv[j] = k * (v[j] - 48);
			}
	
			if (v[j] >= 'A' && v[j] < 'Z')
			{	
				inv[j]= k * (v[j] - 55);
			}
		}
	
	soma = soma + inv[j];
	}

	printf ("O numero em binario eh: ");

	for(i = 0; soma >= 1; i++)
	{
		inv[i]= soma % 2; 
		soma = soma / 2;
	}

	for(j = i - 1; j >= 0; j--)
	{
		printf("%d", inv[j]);
	}

	printf ("\n");
}

void dec_bin(int l)
{
	int inv[256], i, j; 

	printf ("O numero em binario eh: ");

	for(i = 0; l >= 1 ; i++)
	{
		inv[i] = l % 2; 
		l = l / 2;
	}

	for(j = i - 1; j >= 0; j--)
	{
		printf("%d", inv[j]);
	}
	
	printf ("\n");
}

void dec_hex(int l)
{
	int i, j, k[256];
	
	for (i = 0; l >= 1; i++)
	{
		k[i]= l % 16;
		l = l / 16;
	}
	
	printf ("O numero em hexadecimal eh: ");

	for(j = i - 1; j >= 0; j--)
	{
		if(k[j] <= 9)
		{
			printf("%d",k[j]);
		}
		
		if(k[j] > 9)
		{
			k[j]+= 55;
			printf("%c",k[j]);
		}
	}
	
	printf ("\n");
}

void octal_dec (char v[])
{
	int inv[256], i, j, k, l, soma=0;

	for (i = 0; v[i] != '\0'; i++)
	{}

	for (j = i - 1; j >= 0; j--)
	{
		k = 1;
		
		if(v[j] == '0')	
		{
			inv[j] = 0;
		}
		
		else
		{
			for(l = 0; l <= i - j - 2; l++)
			{
				k = k * 8;
			}

			if (v[j] >= '0' && v[j] <= '8')
			{
				inv[j] = k * (v[j] - 48);
			} 
		}
	
	soma = soma + inv[j];}
	
	printf ("O numero em decimal eh: %d",soma);
	printf ("\n");
}

void dec_octal(int l)
{
	int inv[256], i, j; 

	printf ("O numero em octal eh: "); 

	for(i = 0; l >= 1; i++)
	{
		inv[i] = l % 8;
		l = l / 8;
	}

	for(j = i - 1; j >= 0; j--)
	{
		printf("%d", inv[j]);
	}
	
	printf ("\n");
}

int main()
{
	char vet[256];
	int cont = -1, n, x;
	
	do
	{
		printf("\n1. Inserir uma palavra" "\n2. Inserir uma chave" "\n3. Criptografar a palavra inserida" "\n4. Descriptografar a palavra inserida"
		"\n5. Limpar tudo" "\n6. Sair do programa ");
		scanf ("%d",&cont);
		
		switch (cont)
		{
			case 1:
				printf ("\nDigite o numero em binario: ");
				scanf("%s",(char *)&vet); 
				getchar ();
				bin_dec(vet);
			break;

			case 2:
				printf ("\nDigite o numero em binario: ");
				scanf("%s",(char *)&vet); 
				getchar ();
				bin_hex(vet);
			break;

			case 3:
				printf ("\nDigite o numero em hexadecimal: ");
				scanf("%s",(char *)&vet); 
				getchar();
				hex_dec(vet);
			break;

			case 4:
				printf ("\nDigite o numero em hexadecimal: ");
				scanf("%s",(char *)&vet);
				getchar();
				hex_bin(vet);
			break;

			case 5:
				printf ("\nDigite o numero em decimal: ");
				scanf("%d",&n); 
				getchar();
				dec_bin(n);
			break;
			
			case 6:
				printf ("\nDigite o numero em decimal: ");
				scanf("%d",&n); 
				getchar();
				dec_hex(n);
			break;

			case 7:
				printf ("\nDigite o numero em octal: ");
				scanf("%s",(char *)&vet);
				getchar();
				octal_dec(vet);
			break;

			case 8:
				printf("\nDigite o numero em decimal: ");
				scanf("%d",&n); 
				getchar();
				dec_octal(n);
			break;

			case 9:
				printf ("Saindo do programa!");
			break; 
		}
	} while (cont != 9);

	return 0;
}
