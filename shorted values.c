#include <stdio.h>

int main() {
    int a, b, c;
    int x, y, z;
    int temp;

    // Read the three initial integers
    if (scanf("%d %d %d", &a, &b, &c) != 3) {
        return 0;
    }

    // Keep a copy of the original values for sorting
    x = a;
    y = b;
    z = c;

    // Sort x, y, and z in ascending order
    if (x > y) { temp = x; x = y; y = temp; }
    if (x > z) { temp = x; x = z; z = temp; }
    if (y > z) { temp = y; y = z; z = temp; }

    // Print the sorted values
    printf("%d\n%d\n%d\n", x, y, z);

    // Print a blank line
    printf("\n");

    // Print the original values in the sequence they were read
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
