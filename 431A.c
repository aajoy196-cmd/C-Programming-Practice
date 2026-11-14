#include <stdio.h>

int main()
{
    int a[5];
    char s[100001];
    int sum = 0;

    for(int i = 1; i <= 4; i++)
    {
        scanf("%d", &a[i]);
    }

    scanf("%s", s);

    for(int i = 0; s[i] != '\0'; i++)
    {
        int x = s[i] - '0';
        sum = sum + a[x];
    }

    printf("%d\n", sum);

    return 0;
}

