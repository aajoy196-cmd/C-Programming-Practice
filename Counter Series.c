#include <stdio.h>

int main()
{
    int i1 = 0, j1;
    for (j1 = 1; j1 <= 3; j1++)
    {
        printf("I=%d J=%d\n", i1, j1);
    }


    float i2, j2;

    for (i2 = 0.2; i2 < 0.9; i2 = i2 + 0.2)
    {
            j2 = i2 + 1;

            printf("I=%.1lf J=%.1lf\n", i2, j2);
            printf("I=%.1lf J=%.1lf\n", i2, j2 + 1);
            printf("I=%.1lf J=%.1lf\n", i2, j2 + 2);

    }
    int i5 = 1, j5;
    for (j5 = 2; j5 <= 4; j5++)
    {
        printf("I=%d J=%d\n", i5, j5);
    }


    float i4, j4;

    for (i4 = 1.2; i4 <= 2; i4 = i4 + 0.2)
    {
            j4 = i4 + 1;

            printf("I=%.1lf J=%.1lf\n", i4, j4);
            printf("I=%.1lf J=%.1lf\n", i4, j4 + 1);
            printf("I=%.1lf J=%.1lf\n", i4, j4 + 2);

    }

    int i3 = 2, j3;
    for (j3 = 3; j3 <= 5; j3++)
    {
        printf("I=%d J=%d\n", i3, j3);
    }

    return 0;
}

