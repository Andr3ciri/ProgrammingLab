#include <stdio.h>

int main() {
    int n, a = 0, b = 1, c;

    printf("Inserisci un numero: ");
    scanf("%d", &n);

    printf("I primi %d numeri di Fibonacci sono:\n", n);

    for (int i = 0; i < n; i++) {
        printf("F(%d)=%d \n", i, a);
        c = a + b;
        a = b;
        b = c;
    }

    return 0;
}
