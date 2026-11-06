#include<stdio.h>
#include<conio.h>

int main()
{
    int num[1000], n;
    scanf("%d", &n);
    int i;

    for(i = 0; i < n; i++)
    {
        scanf("%d", &num[i]);
    }

    int min = num[0];

    for(i = 1; i < n; i++)
    {
        if(min > num[i])
        {
           min = num[i];
        }
    }
    printf("Menor valor: %d\n", min);

    int value = min;
    int position = -1;

    for(i = 0; i < n; i++)
    {
        if(value == num[i])
        {
            position = i;
            break;
        }
    }
    if(position == -1)
    {
        printf("Not found\n");
    }
    else
    {
        printf("Posicao: %d\n", position);
    }

    getch();
}


