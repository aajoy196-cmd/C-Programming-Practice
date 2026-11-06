#include<stdio.h>
int main()
{
    int num1,num2,num3;
    printf("Enter 3 Integer:");
    scanf("%d%d%d",&num1,&num2,&num3);
    if(num1>num2 && num1>num3)
        printf("Number 1 is the Large:%d",num1);

    else if(num1<num2 && num2>num3)
        printf("Number 2 is the Large:%d",num2);
    else if(num3>num1 && num3>num2)
        printf("Number 3 is the large:%d",num3);
    else
        printf("Number is Equal\n");

    return 0;
}

