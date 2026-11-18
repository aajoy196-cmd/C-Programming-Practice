
#include <stdio.h>

int main()
{
    int n, i;
    double a, b, c, average;

    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        scanf("%lf %lf %lf", &a, &b, &c);

        average = (a * 2 + b * 3 + c * 5) / 10;

        printf("%.1lf\n", average);
    }

    return 0;
}

