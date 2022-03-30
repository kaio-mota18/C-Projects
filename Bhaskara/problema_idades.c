#include <stdio.h>
#include <string.h>



int main (){


    int idade1, idade2;
    char nome1[50], nome2[50];
    double media;

    printf("Dados da primeira pessoa:\n");
    printf("Nome: ");
    fseek(stdin, 0, SEEK_END);
    gets(nome1);
    printf("Idade: ");
    scanf("%d", &idade1);


    printf("Dados da segunda pessoa:\n");
    printf("Nome: ");
    fseek(stdin, 0, SEEK_END);
    gets(nome2);
    printf("Idade: ");
    scanf("%d", &idade2);

    media = (double)(idade1 + idade2) / 2;

    printf("A idade media de %s e %s eh de %1.lf anos.", nome1, nome2, media);











    return 0;

}
