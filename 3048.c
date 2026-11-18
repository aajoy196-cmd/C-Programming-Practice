
#include <stdio.h>

int main()
{
    int n, a, previous;
    int count = 1;

    scanf("%d", &n);

    scanf("%d", &previous);

    for(int i = 1; i < n; i++)
    {
        scanf("%d", &a);

        if(a != previous)
        {
            count++;
        }

        previous = a;
    }

    printf("%d\n", count);

    return 0;
}

