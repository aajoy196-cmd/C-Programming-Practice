#include<stdio.h>
int main()
{
    double mark;
    printf("Enter Your Mark:");
    scanf("%lf",&mark);
    if(mark<33)
        printf("You are Fail in exam");

    else if(mark>=33 && mark<40)
        printf("Your grade is D");
    else if(mark>=40 && mark<50)
        printf("Your grade is C");
    else if(mark>=50 && mark<60)
        printf("Your grade is B");
    else if(mark>=60 && mark<70)
        printf("Your grade is A-");
    else if(mark>=70 && mark<80)
        printf("Your grade is A");
    else if(mark>=80)
        printf("Your grade is A+");


    return 0;
}

