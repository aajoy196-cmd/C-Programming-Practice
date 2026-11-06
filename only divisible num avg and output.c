#include <stdio.h>

int main()
{
    int n,k;
    scanf("%d%d",&n,&k);
    int i,arr[n];

    for(i=0;i<n;i++)
    {
        scanf("%d",&arr[i]);
    }
    int sum=0, count=0;
    double avg;
    for(i=0;i<n;i++)
    {
        if(arr[i]%k==0)
        {
            sum=sum+arr[i];
            count++;
        }
    }
    avg=(double)sum/count;
    printf("Average = %.2f\n",avg);

    printf("Divisible numbers:");

    for(i=0;i<n;i++)
    {
        if(arr[i]%k==0)
        {
            printf(" %d",arr[i]);
        }
    }
    printf("\n");

    return 0;
}

