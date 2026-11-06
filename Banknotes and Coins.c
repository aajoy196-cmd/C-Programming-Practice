#include <stdio.h>

int main() {
    double value;


    if (scanf("%lf", &value) != 1) return 0;


    int total_cents = (int)(value * 100 + 0.5);


    int notes[] = {10000, 5000, 2000, 1000, 500, 200};
    double notes_print[] = {100.00, 50.00, 20.00, 10.00, 5.00, 2.00};

    int coins[] = {100, 50, 25, 10, 5, 1};
    double coins_print[] = {1.00, 0.50, 0.25, 0.10, 0.05, 0.01};


    printf("NOTAS:\n");
    for (int i = 0; i < 6; i++) {
        int count = total_cents / notes[i];
        printf("%d nota(s) de R$ %.2f\n", count, notes_print[i]);
        total_cents %= notes[i];
    }


    printf("MOEDAS:\n");
    for (int i = 0; i < 6; i++) {
        int count = total_cents / coins[i];
        printf("%d moeda(s) de R$ %.2f\n", count, coins_print[i]);
        total_cents %= coins[i];
    }

    return 0;
}
