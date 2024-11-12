#include <stdio.h>
#include <math.h>

int potenza_2(int y) {
    return (y == 0 || (y & (y - 1)) == 0) ? 1 : 0;
}

int main() {
    int n = 5;
    int i, y;
    double pi_n = 0;

    for (i = 1; i <= n; i++) {
        double somma_int = 0;
        double prod_int = 1;

        for (y = 0; y < i; y++) {
            somma_int += y * potenza_2(y);
            prod_int *= pow(2, y + 1) * (1 - potenza_2(y));
        }

        pi_n += somma_int + prod_int;
    }

    printf("π₅ = %.2f\n", pi_n);

    return 0;
}