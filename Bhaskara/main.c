#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>

int main(){

    double a, b, c, delta, x1, x2;

    printf("Coeficiente a: ");
    scanf("%lf", &a);
    printf("Coeficiente b: ");
    scanf("%lf", &b);
    printf("Coeficiente c: ");
    scanf("%lf", &c);

    delta = pow(b, 2.0) - 4 * (a * c);

    x1 = (- b + sqrt(delta)) / (2 * a);
    x2 = (- b - sqrt(delta)) / (2 * a);

    if (delta < 0 || a == 0){
        printf("\nEsta equacao nao possui raizes reais.\n");
    }

    else{
        printf("\nX1 = %.4lf\n", x1);
        printf("\nX2 = %.4lf\n", x2);
    }



    return 0;
}
