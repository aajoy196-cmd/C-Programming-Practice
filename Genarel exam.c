#include <stdio.h>

int main()
{
    int n, q;

    while(scanf("%d %d", &n, &q) != EOF)
    {
        int a[100];

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);
        }


        for(int i = 0; i < n - 1; i++)
        {
            for(int j = 0; j < n - 1 - i; j++)
            {
                if(a[j] < a[j + 1])
                {
                    int temp = a[j];
                    a[j] = a[j + 1];
                    a[j + 1] = temp;
                }
            }
        }

        for(int i = 0; i < q; i++)
        {
            int p;
            scanf("%d", &p);

            printf("%d\n", a[p - 1]);
        }
    }

    return 0;
}

