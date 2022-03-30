#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int cont, i, j, N;
    double mat[50][50];


    printf("Qual a ordem da matriz? ");
    scanf("%d", &N);

    for (i = 0; i < N; i++){
        for (j = 0; j < N; j++){
            printf("Elemento [%d,%d]:", i, j);
            scanf("%lf", &mat[i][j]);


        }
    }

    printf("DIAGONAL PRINCIPAL: \n");

    for (i = 0; i < N; i++){
            printf("%.1lf  ", mat[i][i]);

        }
    cont = 0;
    for (i = 0; i < N; i++){
        for (j = 0 ; j < N; j++){
         if (mat[i][j] < 0){
            cont = cont + 1;
         }
        }
    }

    printf("\nQUANTIDADE DE NEGATIVOS: %d", cont);



    return 0;
}
