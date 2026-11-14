#include <stdio.h>

int main()
{
    int n, point;
    int max, min;
    int count = 0;

    scanf("%d", &n);

    scanf("%d", &point);

    max = point;
    min = point;

    for(int i = 1; i < n; i++)
    {
        scanf("%d", &point);

        if(point > max)
        {
            max = point;
            count++;
        }
        else if(point < min)
        {
            min = point;
            count++;
        }
    }

    printf("%d\n", count);

    return 0;
}

