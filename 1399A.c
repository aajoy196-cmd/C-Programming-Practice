#include <stdio.h>
#include <stdlib.h>

int main()
{
    int t, n, a[51], flag;

    scanf("%d", &t);

    while(t--)
    {
        scanf("%d", &n);

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }

        for(int i = 0; i < n - 1; i++)
        {
            for(int j = 0; j < n - 1 - i; j++)
            {
                if(a[j] > a[j + 1])
                {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }

        flag = 0;

        for(int i = 1; i < n; i++)
        {
            if(a[i] - a[i - 1] > 1)
            {
                flag = 1;
                break;
            }
        }

        if(flag == 0)
            printf("YES\n");
        else
            printf("NO\n");
    }

    return 0;
}

