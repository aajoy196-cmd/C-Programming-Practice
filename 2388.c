
#include <stdio.h>

int main()
{
    int n, t, v;
    int total = 0;

    scanf("%d", &n);

    for(int i = 0; i < n; i++)
    {
        scanf("%d %d", &t, &v);

        total = total + (t * v);
    }

    printf("%d\n", total);

    return 0;
}

