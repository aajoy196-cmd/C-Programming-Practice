#include <stdio.h>

int main() {

    int ix, iy, fx, fy;
    scanf("%d%d%d%d", &ix, &iy, &fx, &fy);

    if((fx > ix) && (fy > iy))
    {
        int time = fx - ix;
        int sec = fy - iy;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", time, sec);
    }

    else if((fx == ix) && (fy == iy))
    {

        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }

    else if((fx < ix) && (fy < iy))
    {
        int t1 = (fx + 24) - (ix + 1);
        int s1 = (fy + 60) - iy;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", t1, s1);
    }

    else if((fx > ix) && (fy < iy))
    {
        int t2 = fx - (ix + 1);
        int s2 = (fy + 60) - iy;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", t2, s2);
    }

    else if((fx < ix) && (fy > iy))
    {
        int t3 = (fx + 24) - ix;
        int s3 = fy - iy;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n", t3, s3);
    }

    return 0;
}

