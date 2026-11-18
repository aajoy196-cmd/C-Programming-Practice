#include <stdio.h>

int main()
{
    int n, i, jump, sum;
    int coin[10000];
    int prime, j;

    while(scanf("%d", &n) == 1)
    {
        for(i = 0; i < n; i++)
        {
            scanf("%d", &coin[i]);
        }

        scanf("%d", &jump);

        sum = 0;

        for(i = n - 1; i >= 0; i = i - jump)
        {
            sum = sum + coin[i];
        }

        prime = 1;

        if(sum < 2)
        {
            prime = 0;
        }
        else
        {
            for(j = 2; j * j <= sum; j++)
            {
                if(sum % j == 0)
                {
                    prime = 0;
                    break;
                }
            }
        }

        if(prime == 1)
        {
            printf("You’re a coastal aircraft, Robbie, a large silver aircraft.\n");
        }
        else
        {
            printf("Bad boy! I’ll hit you.\n");
        }
    }

    return 0;
}

