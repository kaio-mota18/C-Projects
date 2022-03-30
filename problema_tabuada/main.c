#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i, N, x, total;

    printf("Deseja a tabuada de qual valor? ");
    scanf("%d", &x);

    N = 10;

    for (i=1; i<=N; i++){
        total = x * i;
        printf("%d X %d = %d\n", x, i, total);
    }

    return 0;
}
