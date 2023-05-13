#include <stdio.h>

int main() {
    int a, b, c;
    scanf("%d %d %d", &a, &b, &c);

    // Sort the values in ascending order using nested if statements
    if (a > b) {
        int temp = a;
        a = b;
        b = temp;
    }
    if (a > c) {
        int temp = a;
        a = c;
        c = temp;
    }
    if (b > c) {
        int temp = b;
        b = c;
        c = temp;
    }

    // Print the sorted values and a blank line
    printf("%d\n%d\n%d\n\n", a, b, c);

    // Print the original values
    printf("%d\n%d\n%d\n", a, b, c);

    return 0;
}
