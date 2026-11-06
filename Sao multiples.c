#include <stdio.h>

int main() {
    int A, B;

    // Read the two integer values
    if (scanf("%d %d", &A, &B) == 2) {
        // Check if A is a multiple of B, or B is a multiple of A
        if (A % B == 0 || B % A == 0) {
            printf("Sao Multiplos\n");
        } else {
            printf("Nao sao Multiplos\n");
        }
    }

    return 0;
}
