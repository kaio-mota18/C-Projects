#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int v1, v2, v3, menor;

    printf("Digite o primeiro valor: ");
    scanf("%d", &v1);
    printf("Digite o segundo valor: ");
    scanf("%d", &v2);
    printf("Digite o terceiro valor: ");
    scanf("%d", &v3);

    if (v1 < v2 && v1 < v3 ){
        menor = v1;
    }

    if (v2 < v1 && v2 < v3){
        menor = v2;
    }
    else{
        menor = v3;
    }

    printf("MENOR = %d", menor);


    return 0;
}
