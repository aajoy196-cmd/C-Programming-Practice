#include <stdio.h>

int main()
{
    int n, a[101];
    int found = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(int i = 1; i < n; i++)
    {
        if(a[i] < a[i - 1])
        {
            printf("%d\n", i + 1);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("0\n");
    }

    return 0;
}

