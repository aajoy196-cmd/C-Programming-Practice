#include<stdio.h>
int main()
{
    int a;
    printf("Enter an Integer:");
    scanf("%d",&a);
    if(a==0)
        printf("Zero");

    else if(a%2==0)
        printf("Number is even");
    else
        printf("Number is odd");

    return 0;
}
