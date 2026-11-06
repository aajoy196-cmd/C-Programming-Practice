#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter Centrigrade value:");
    scanf("%f",&c);

    f=(c*1.8)+32;
    printf("The farn is :%.2f\n",f);

    float f2,c2;
    printf("Enter Farn2 value:");
    scanf("%f",&f2);

    c2=(f2-32)/1.8;
    printf("The Centrigrade is :%.2f\n",c2);
    return 0;
}
