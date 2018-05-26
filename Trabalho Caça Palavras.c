#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#define TAM 30


void add_palavra(char M[][TAM], char S[][TAM])
{
	int a = 0, j, t = 0, k, i, c = 0, l = 0, aux, p = 0;
	char palavra[256];
	printf("Deseja adicionar quantas palavras?\n\n");
	scanf("%d", &p);
	for(aux = 0; aux != p; aux ++)
	{
	    printf("Digite uma palavra para adicionar: \n\n");
	    gets(palavra);
        fflush(stdin);
        for(j = 0; palavra[j] != '\0'; j++)
	        palavra[j] = toupper(palavra[j]);
	    k = rand()%7 + 1;
	    t = strlen(palavra);
	    do
	    { 
	        l = rand()%29;
	        c = rand()%29;   
		}while(t <= l && t <= c && l && t <= 30-t && t <= 30-t);
		if( k == 1)
        {
            for(i = 0; palavra[i] != '\0'; i++, c++)
  	        {
   	            M[l][c] = palavra[i];
   	            S[l][c] = '.';                
			}
	    }
        else if( k == 2)
	    {
    	    for(i = 0; palavra[i] != '\0'; i++, c++, l--)
    	    {
    	        M[l][c] = palavra[i];
    	        S[l][c] = '.';
            }
	    } 	
	    else if( k == 3)
        {
    	    for(i = 0; palavra[i] != '\0'; i++, l--)
    	    {
    	        M[l][c] = palavra[i];
    	        S[l][c] = '.';
            }
 	    }
	    else if( k == 4)
        {
    	    for(i = 0; palavra[i] != '\0'; i++, c--, l--)
    	    {
    	        M[l][c] = palavra[i];
    	        S[l][c] = '.';
            }
	    }
	    else if( k == 5)
        {
    	    for(i = 0; palavra[i] != '\0'; i++, c--)
    	    {
    	        M[l][c] = palavra[i];
    	        S[l][c] = '.';
            }
 	    }
	    else if( k == 6)
        {
    	    for(i = 0; palavra[i] != '\0'; i++, c--, l++)
    	    {
    	        M[l][c] = palavra[i];
    	        S[l][c] = '.';
            }
	    }	
	    else if( k == 7)
        {
    	    for(i = 0; palavra[i] != '\0'; i++, l++)
    	    {
    	        M[l][c] = palavra[i];
    	        S[l][c] = '.';
            }
	    } 
	    else if( k == 8)
        {
    	    for(i = 0; palavra[i] != '\0'; i++, c++, l++)
    	    {
    	        M[l][c] = palavra[i];
    	        S[l][c] = '.';
            }
	    }
	 k = 0;
	}   
}

void copiar_matriz(char M[][TAM], char S[][TAM])
{
	int i, j;
	for(i = 0; i != TAM; i++)
	{
		for( j = 0; j != TAM; j++)
		    S[i][j] = M[i][j];
	}
}

void gerar_matriz(char M[][TAM])
{
	int i, j;
	for(i = 0; i < TAM; i++)
	{
		for(j = 0; j < TAM; j++)
		 M[i][j] = rand()%26 + 65; 
	}
}

void imprimir_matriz(char M[][TAM])
{
	int i, j;
	for(i = 0; i < TAM; i++)
	{
		for(j = 0; j < TAM; j++)
		 printf("%c ", M[i][j]);
		printf("\n"); 
	}
}

int main()
{
	int a, j, i;
	srand(time(0));
	char M[TAM][TAM], S[TAM][TAM], k;
	gerar_matriz(M);
	copiar_matriz(M, S);
    add_palavra(M, S);
	imprimir_matriz(M);
	printf("Aperte enter para ver a solucao.\n");
	getch();
	printf("\n\n\n---------------------------------------SOLUCAO--------------------------------------- \n\n\n");
	imprimir_matriz(S);
	
	return 0;
	
}
