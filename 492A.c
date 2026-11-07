#include <stdio.h>

int main()
{
    int n;
    int sum = 0, level = 0, cubes = 0;

    scanf("%d", &n);

    for(int i = 1; ; i++)
    {
        cubes = cubes + i;
        sum = sum + cubes;

        if(sum > n)
        {
            break;
        }

        level++;
    }

    printf("%d\n", level);

    return 0;
}

