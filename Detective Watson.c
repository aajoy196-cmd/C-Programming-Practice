#include <stdio.h>

int main()
{
    int n;

    while(scanf("%d", &n) == 1 && n != 0)
    {
        int a[1000];
        int max = 0;
        int second = 0;
        int pos = 0;

        for(int i = 0; i < n; i++)
        {
            scanf("%d", &a[i]);

            if(a[i] > max)
            {
                max = a[i];
            }
        }

        for(int i = 0; i < n; i++)
        {
            if(a[i] > second && a[i] < max)
            {
                second = a[i];
                pos = i + 1;
            }
        }

        printf("%d\n", pos);
    }

    return 0;
}

