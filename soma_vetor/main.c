#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int n;
    double vet[50];
    double soma, media;

    printf("Quantos numeros voce vai digitar?");
    scanf("%d", &n);

    for (int i = 0; i < n; i++){
        printf("Digite um numero: ");
        scanf("%lf", &vet[i]);
    }

    printf("\n\n");
    printf("VALORES = ");

    for (int i = 0; i < n; i++){
        printf("%.1lf  ", vet[i]);
    }

    soma = 0;
    for (int i = 0; i < n; i++){
        soma = soma + vet[i];
    }

    printf("\nSOMA = %.1lf\n", soma);

    media = soma / n;
    printf("MEDIA = %.1lf", media);






    return 0;
}
