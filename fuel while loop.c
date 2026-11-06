#include <stdio.h>

int main()
{
    int n;
    int alcohol = 0, gasoline = 0, diesel = 0;

    while (1)
    {
        scanf("%d", &n);

        if (n == 4)
        {
            break;
        }

        if (n == 1)
        {
            alcohol++;
        }
        else if (n == 2)
        {
            gasoline++;
        }
        else if (n == 3)
        {
            diesel++;
        }
    }

    printf("MUITO OBRIGADO\n");
    printf("Alcool: %d\n", alcohol);
    printf("Gasolina: %d\n", gasoline);
    printf("Diesel: %d\n", diesel);

    return 0;
}

