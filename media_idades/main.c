#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    double media, cont, soma, x;

    printf("Digite as idades:\n");
    scanf("%lf", &x);

    soma = 0;
    cont = 0;

    while(x >= 0){
          soma = soma + x;
          cont = cont + x;
          scanf("%lf", &x);
    }

    if (cont == 0){
        printf("IMPOSSIVEL CALCULAR");
    }
    else{
        media = soma / cont;
        printf("MEDIA = %.2lf\n", media);
    }

    return 0;
}
