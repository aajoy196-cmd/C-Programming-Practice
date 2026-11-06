#include<stdio.h>
int main()
{
    int a;
    printf("Enter an Integer:");
    scanf("%d",&a);
    if(a==0)
        printf("Zero");

    else if(a<0)
        printf("Number is Negative");
    else
        printf("Number is Positive");

    return 0;
}
