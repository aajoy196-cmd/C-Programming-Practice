#include <stdio.h>

int main()
{
    int w1;
    printf("Dia ");
    scanf("%d", &w1);

    int x1, y1, z1;

    scanf("%d%d%d", &x1, &y1, &z1);

    int w2;
    printf("Dia ");
    scanf("%d", &w2);

    int x2, y2, z2;

    scanf("%d%d%d", &x2, &y2, &z2);

    long long int ts1 = (w1 * 86400) + (x1 * 3600) + (y1 * 60) + z1;
    long long int ts2 = (w2 * 86400) + (x2 * 3600) + (y2 * 60) + z2;
    long long int ds = ts2 - ts1;

    int dia = (ds / 86400);
    printf("%d dia(s)\n", dia);

    int hora = (ds % 86400) / 3600;
    printf("%d hora(s)\n", hora);

    int minuto = ((ds % 86400) % 3600) / 60;
    printf("%d minuto(s)\n", minuto);

    int segundo = ((ds % 86400) % 3600) % 60;
    printf("%d segundo(s)\n", segundo);


    return 0;
}

