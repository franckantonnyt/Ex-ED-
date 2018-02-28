#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[])
{
    int vet[10][10];
    int vet2[10][10];
    int vet3[10][10];
    int i,x,z;
    srand(time(NULL));
    for(i = 0; i < 10; i++)
    {
        for(x = 0; x < 10; x++)
        {
            vet[i][x] = rand() % 10;
            vet2[i][x] = rand() % 10;
        }
    }
    for(i = 0; i < 10; i++)
    {
        for(x = 0; x < 10; x++)
        {
            printf(" %i ",vet[i][x]);
        }
        printf("\n");
    }
    printf("\n");
	for(i = 0; i < 10; i++)
    {
        for(x = 0; x < 10; x++)
        {
            printf(" %i ",vet2[i][x]);
        }
        printf("\n");
    }
//diagonal primaria
    printf("DIAGONAL PRIMARIA\n");
    for(i = 0; i < 10; i++)
    {
        for(x = 0; x < 10; x++)
        {
            if(x == i)
            {
                printf(" %i ",vet[i][x]);
            }
            else
                printf(" - ");
        }
        printf("\n");
    }
    printf("DIAGONAL SECUNDARIA\n");
//diagonal secundaria
    for(i = 0; i < 10; i++)
    {
        for(x = 0; x < 10; x++)
        {
            if(x + i == 9)
            {
                printf(" %i ",vet[i][x]);
            }
            else
                printf(" - ");
        }
        printf("\n");
    }
    printf("TRIANGULO SUPERIOR\n");
//triangulo superior
    for(i = 0; i < 10; i++)
    {
        for(x = 0; x < 10; x++)
        {
            if(x > i)
            {
                printf(" %i ",vet[i][x]);
            }
            else
                printf(" - ");
        }
        printf("\n");
    }
    printf("TRIANGULO INFERIOR\n");
//triangulo superior
    for(i = 0; i < 10; i++)
    {
        for(x = 0; x < 10; x++)
        {
            if(x < i)
            {
                printf(" %i ",vet[i][x]);
            }
            else
                printf(" - ");
        }
        printf("\n");
    }
    printf("MULTIPLICAÇAO DE MATRIZ\n");
//Multiplicação de Matriz
	int j=0;
    for(i = 0; i < 10; i++)
    {
    	vet3[i][x] = 0;
        for(x = 0; x < 10; x++)
        {
        	for(z = 0; z < 10; z++)
        	{
        		j = vet[i][z] * vet2[z][x];
				vet3[i][x] = j + vet3[i][x];	
			}	
			printf("| %i |",vet3[i][x]);
        }
        printf("\n");
    }
    return 0;
}
