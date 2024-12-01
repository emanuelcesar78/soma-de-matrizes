#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void soma (int matriz_A[5][5],int matriz_B[5][5])
{
    int matriz_C[5][5];
    printf("\n\n\nCalculo\n\n\n");
    for (int i = 0; i<5;i++)
        {
            for(int l=0; l < 5; l++)
                {
                    matriz_C[i][l] = matriz_A[i][l] + matriz_B[i][l];
                }
        }

    printf("\n\n\nmatriz C\n\n\n");
    for (int i = 0; i<5;i++)
        {
            for (int l = 0; l < 5; l++)
                {
                    printf("%d ",matriz_C[i][l]);
                }
            printf("\n");
        }

}

int main()
{
    srand(time(0));
    int matriz_A[5][5],matriz_B[5][5];

    for(int i = 0; i<5; i++)
        {
            for(int l = 0; l < 5; l++)
                {
                    matriz_A[i][l] = rand()% 100;
                    matriz_B[i][l] = rand()%100;
                    printf("\nmatriz_A[%d][%d]\nmatriz_B[%d][%d]",matriz_A[i][l],matriz_B[i][l] );

                }
        }

    for (int coluna = 0; coluna < 5;coluna++)
        {
            for(int linha = 0; linha < 5;linha++)
                {
                    printf("%d ",matriz_A[coluna][linha]);

                }
            printf("\n");
        }

    for (int coluna = 0; coluna < 5;coluna++)
        {
            for(int linha = 0; linha < 5;linha++)
                {
                    printf("%d ",matriz_B[coluna][linha]);

                }
            printf("\n");
        }

        soma(matriz_A,matriz_B);
}
