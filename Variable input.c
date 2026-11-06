#include<stdio.h>
#include<conio.h>
int main()
{
    int num1,num2;
    printf("Enter Two Number:");
    scanf("%d%d",&num1,&num2);
    printf("Number are :%d\t%d\n",num1,num2);

    float num3,num4;
    printf("Enter Two Number:");
    scanf("%f%f",&num3,&num4);
    printf("Number are :%.2f\t%f\n",num3,num4);

    double num5,num6;
    printf("Enter Two Number:");
    scanf("%lf%lf",&num5,&num6);
    printf("Number are :%lf\t%.1lf\n",num5,num6);

    char ch='A';
    printf("Character :%c",ch);

    getch();
}
