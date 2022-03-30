#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int x;
    double vet[50];

    printf("Quantos numeros voce vai digitar?");
    scanf("%d", &x);

    for (int i = 0; i < x; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    printf("NUMEROS NEGATIVOS\n\n");
    for (int i = 0; i < x; i++){
        if (vet[i] < 0){
            printf("%.1lf", vet[i]);
            printf("\n");
        }
    }



    return 0;
}
