#include <stdio.h>

int main()
{
    float salary;

    scanf("%f", &salary);

    if(salary >= 0 && salary <= 400)
    {
        int r1 = 15;

        double g1 = (salary / 100.0) * r1;

        double t1 = salary + g1;

        printf("Novo salario: %.2lf\n", t1);

        printf("Reajuste ganho: %.2lf\n", g1);

        printf("Em percentual: 15 %%\n");

    }

    else if(salary > 400 && salary <= 800)
    {
        int r2 = 12;

        double g2 = (salary / 100.0) * r2;

        double t2 = salary + g2;

        printf("Novo salario: %.2lf\n", t2);

        printf("Reajuste ganho: %.2lf\n", g2);

        printf("Em percentual: 12 %%\n");

    }

    else if(salary > 800 && salary <= 1200)
    {
        int r3 = 10;

        double g3 = (salary / 100.0) * r3;

        double t3 = salary + g3;

        printf("Novo salario: %.2lf\n", t3);

        printf("Reajuste ganho: %.2lf\n", g3);

        printf("Em percentual: 10 %%\n");

    }

    else if(salary > 1200 && salary <= 2000)
    {
        int r4 = 7;

        double g4 = (salary / 100.0) * r4;

        double t4 = salary + g4;

        printf("Novo salario: %.2lf\n", t4);

        printf("Reajuste ganho: %.2lf\n", g4);

        printf("Em percentual: 7 %%\n");

    }

    else if(salary > 2000)
    {
        int r5 = 4;

        double g5 = (salary / 100.0) * r5;

        double t5 = salary + g5;

        printf("Novo salario: %.2lf\n", t5);

        printf("Reajuste ganho: %.2lf\n", g5);

        printf("Em percentual: 4 %%\n");

    }

    return 0;
}

