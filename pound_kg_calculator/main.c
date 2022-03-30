#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int choice;
    double weight, result, pound;

    printf("''''''''POUND/KILOGRAM CALCULATOR''''''''\n\n");
    printf("PRESS '1' TO PUT THE WEIGHT IN POUNDS; PRESS '2' TO PUT THE WEIGHT IN KILOGRAMS: ");
    scanf("%d", &choice);
    printf("\n");


    while (choice == 1 || choice == 2 )
    {
        if (choice == 1)
        {
            pound = 0.453592;
            printf("INSERT THE WEIGHT: ");
            scanf("%lf", &weight);
            result = weight * pound;
            printf("WEIGHT IN KG = %.2lf\n", result);
            printf("\n");
            printf("PRESS '1' TO PUT THE WEIGHT IN POUNDS; PRESS '2' TO PUT THE WEIGHT IN KILOGRAMS, PRESS '3' TO FINISH THE PROGRAM: ");
            scanf("%d", &choice);
        }
        else if (choice == 2)
            {
                printf("INSERT THE WEIGHT: ");
                scanf("%lf", &weight);
                result = weight * 2.2046;
                printf("WEIGHT IN POUNDS = %.2lf\n", result);
                printf("\n");
                printf("PRESS '1' TO PUT THE WEIGHT IN POUNDS; PRESS '2' TO PUT THE WEIGHT IN KILOGRAMS, PRESS '3' TO FINISH THE PROGRAM: ");
                scanf("%d", &choice);
            }
    }



            return 0;
        }
