#include <stdio.h>

int main()
{
    int t, n, a, sum;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        sum = 0;

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a);
            sum = sum + a;
        }

        if(sum % 2 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }

    return 0;
}

