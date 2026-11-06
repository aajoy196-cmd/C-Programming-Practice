#include<stdio.h>
int main()
{
    float base,height,area;
    printf("Enter Base value:");
    scanf("%f",&base);
    printf("\nEnter Height value:");
    scanf("%f",&height);
    area=(base*height)/2;
    printf("\nThe Area is :%.2f\n",area);
    return 0;
}
