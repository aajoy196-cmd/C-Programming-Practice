#include <stdio.h>
#include <string.h>

int main()
{
    int t, sum;
    char s[101];

    int led[10] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};

    scanf("%d", &t);

    while(t--)
    {
        scanf("%s", s);

        sum = 0;

        for(int i = 0; i < strlen(s); i++)
        {
            sum = sum + led[s[i] - '0'];
        }

        printf("%d leds\n", sum);
    }

    return 0;
}

