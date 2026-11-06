#include<stdio.h>
#include<math.h>
int main()
{
    double a,b,c,s,area;
    printf("Enter 1st value:");
    scanf("%lf",&a);

    printf("Enter 2nd value:");
    scanf("%lf",&b);

    printf("Enter 3rd value:");
    scanf("%lf",&c);

    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("The Area is :%.2lf\n",area);
    return 0;
}
