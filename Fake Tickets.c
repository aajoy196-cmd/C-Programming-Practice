#include <stdio.h>

int main()
{
    int n, m, t;
    int freq[10001];
    int count;

    while(scanf("%d %d", &n, &m) == 2)
    {
        if(n == 0 && m == 0)
            break;

        count = 0;

        for(int i = 1; i <= n; i++)
        {
            freq[i] = 0;
        }

        for(int i = 0; i < m; i++)
        {
            scanf("%d", &t);

            if(freq[t] == 1)
            {
                count++;
            }

            freq[t]++;
        }

        printf("%d\n", count);
    }

    return 0;
}

