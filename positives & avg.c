#include <stdio.h>

int main()
{
    float num[6];

    for(int i = 0; i <= 5; i++)
    {
        scanf("%f", &num[i]);
    }

    float n = 0;

    int count = 0;

    if(num[0] > 0)
    {
        n = n + num[0];
        count = count + 1;
    }
    if(num[1] > 0)
    {
        n = n + num[1];
        count = count + 1;
    }
    if(num[2] > 0)
    {
        n = n + num[2];
        count = count + 1;
    }
    if(num[3] > 0)
    {
        n = n + num[3];
        count = count + 1;
    }
    if(num[4] > 0)
    {
        n = n + num[4];
        count = count + 1;
    }
    if(num[5] > 0)
    {
        n = n + num[5];
        count = count + 1;
    }

    printf("%d valores positivos\n", count);

    float avg = n / (float)count;

    printf("%.1f\n", avg);


    return 0;
}

