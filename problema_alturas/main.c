#include <stdio.h>
#include <stdlib.h>
#include <string.h>



int main()
{


    int N;

    printf("Quantas pessoas serao digitadas?");
    scanf("%d", &N);

    char nome[N][50];
    int idade[N];
    double altura[N];
    int cont, cont2;
    double mediaA, soma, porcentagem;

    soma = 0;
    cont = 0;

    for (int i = 0; i < N; i++){
        cont = cont + 1;
        printf("Dados da %da pessoa:\n", i + 1);
        printf("Nome: ");
        fseek(stdin, 0, SEEK_END);
        gets(nome[i]);
        printf("Idade: ");
        scanf("%d", &idade[i]);
        printf("Altura: ");
        scanf("%lf", &altura[i]);
        printf("\n");
        soma = soma + altura[i];
    }

    mediaA = soma / cont;

    printf("Media das alturas = %.2lf\n", mediaA);

    cont2 = 0;
    for (int i = 0; i < N; i++){
        if (idade[i] < 16){
            cont2 = cont2 + 1;
        }
    }

    porcentagem = cont2 * 100.0 / N;

    printf("\nPorcentagem de menores de idade = %.1lf %%\n", porcentagem);

    for (int i = 0; i < N; i++){
        if (idade[i] < 18){
            printf("%s", nome[i]);
            printf("\n");
        }
    }




    return 0;
}
