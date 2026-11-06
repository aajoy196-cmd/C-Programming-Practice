#include<stdio.h>
int main()
{
    int time;
    printf("Enter Time:");
    scanf("%d",&time);
    if(time<=8)
        printf("Good Morning,Joy....");

    else if(time>8 && time<=10)
        printf("Fast wake up");
    else
        printf("Your class was missed");

    return 0;
}
