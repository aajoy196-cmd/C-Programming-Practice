#include <stdio.h>

int main()
{
    int num[5];

    for(int i = 0; i <= 4; i++)
    {
        scanf("%d", &num[i]);
    }

    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    int count4 = 0;

    if(num[0] % 2 == 0)
    {
        count1 = count1 + 1;
    }
    if(num[1] % 2 == 0)
    {
        count1 = count1 + 1;
    }
    if(num[2] % 2 == 0)
    {
        count1 = count1 + 1;
    }
    if(num[3] % 2 == 0)
    {
        count1 = count1 + 1;
    }
    if(num[4] % 2 == 0)
    {
        count1 = count1 + 1;
    }


    if(num[0] % 2 != 0)
        {
            count2 = count2 + 1;
        }
    if(num[1] % 2 != 0)
        {
            count2 = count2 + 1;
        }
    if(num[2] % 2 != 0)
        {
            count2 = count2 + 1;
        }
    if(num[3] % 2 != 0)
        {
            count2 = count2 + 1;
        }
    if(num[4] % 2 != 0)
        {
            count2 = count2 + 1;
        }


    if(num[0] > 0)
            {
                count3 = count3 + 1;
            }
    if(num[1] > 0)
            {
                count3 = count3 + 1;
            }
    if(num[2] > 0)
            {
                count3 = count3 + 1;
            }
    if(num[3] > 0)
            {
                count3 = count3 + 1;
            }
    if(num[4] > 0)
            {
                count3 = count3 + 1;
            }


    if(num[0] < 0)
                {
                   count4 = count4 + 1;
                }
    if(num[1] < 0)
                {
                   count4 = count4 + 1;
                }
    if(num[2] < 0)
                {
                   count4 = count4 + 1;
                }
    if(num[3] < 0)
                {
                   count4 = count4 + 1;
                }
    if(num[4] < 0)
                {
                   count4 = count4 + 1;
                }


    printf("%d valor(es) par(es)\n", count1);
    printf("%d valor(es) impar(es)\n", count2);
    printf("%d valor(es) positivo(s)\n", count3);
    printf("%d valor(es) negativo(s)", count4);


    return 0;
}
