#include <stdio.h>
#include <stdlib.h>




int main()
{
    int N, code;
    float value;
    char type;
    float balance;



    printf("HOW MANY PROJECTS ARE THERE? ");
    scanf("%d", &N);

    float vet[N];

    balance = 0;

   for (int j = 0; j< N; j++){
        printf("TYPE THE PROJECT CODE: ");
        scanf("%d", &code);
        if(code>=0){
            printf("Type the value: ");
            scanf("%f", &value);
            vet[code] = value;
            fflush(stdin);
            printf("What kind of entrance is this? (R - revenue E - expense)");
            scanf("%c", &type);


        if(type == 'R'){
            balance = balance + value;
        }
        else if(type == 'E'){
            value = value/(-1);
            balance = balance + value;
        }
    }
}

        printf("\n");

    for (int i=0; i<N; i++){
        printf("Project %d\n", i);
        printf("Value: %.2f\n", vet[i]);
        printf("\n");

    }

    printf("Final balance: %.2f\n", balance);


return 0;

    }



