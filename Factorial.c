#include<stdio.h>
int main()
{
    int i,n,firstime=1;
    long long factorial=1;
    double sum=0;

    printf("Enter N=");
    scanf("%d",&n);

    for(i=1; i<=n; i++)
    {
        factorial=factorial*i;

        if(!firstime)
        {
            printf("+");
        }
        firstime=0;
        printf("\n%d!",i);

        printf("\nFactorial of %d=%d",i,factorial);
        sum=sum+factorial;

    }
    printf("\nsum=%.2lf\n",sum);
    return 0;
}
