#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);

    for(int i = 1; i <= t; i++)
    {
        int n;
        scanf("%d", &n);

        int age;

        for(int j = 1; j <= n; j++)
        {
            scanf("%d", &age);

            if(j == (n + 1) / 2)
            {
                printf("Case %d: %d\n", i, age);
            }
        }
    }

    return 0;
}
