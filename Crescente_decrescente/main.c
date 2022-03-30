#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{

    int x, y;

    printf("Digite dois numeros:\n");
    scanf("%d", &x);
    scanf("%d", &y);

    while (x != y)
    {

        if (x > y)
        {
            printf("DESCRESENTE\n");
        }
        else
        {
            printf("CRESCENTE\n");
        }
        printf("Digite outros dois numeros:\n ");
        scanf("%d", &x);
        scanf("%d", &y);
    }

    return 0;
}
