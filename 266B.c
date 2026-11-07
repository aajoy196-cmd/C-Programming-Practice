#include <stdio.h>

int main()
{
    int n, t, i, j;
    char s[55], temp;

    scanf("%d %d", &n, &t);
    scanf("%s", s);

    for (i = 1; i <= t; i++)
    {

        for (j = 0; j < n - 1; j++)
        {

            if (s[j] == 'B' && s[j + 1] == 'G')
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;

                j++;
            }
        }
    }

    printf("%s\n", s);

    return 0;
}

