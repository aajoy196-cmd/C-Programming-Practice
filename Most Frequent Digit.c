#include <stdio.h>

int main()
{
    char num[1002];
    int freq[10];

    while(scanf("%1001s", num) == 1)
    {
        for(int i = 0; i < 10; i++)
        {
            freq[i] = 0;
        }

        for(int i = 0; num[i] != '\0'; i++)
        {
            int digit = num[i] - '0';
            freq[digit]++;
        }

        int max = 0, ans = 0;

        for(int i = 9; i >= 0; i--)
        {
            if(freq[i] > max)
            {
                max = freq[i];
                ans = i;
            }
        }

        printf("%d\n", ans);
    }

    return 0;
}

