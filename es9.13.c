#include <stdio.h>

int coefficiente_binomiale(int n, int k) {
    if (k > n || k < 0) {
        return 0; // Gestione di casi invalidi
    }

    int res = 1;

    // Calcola n*(n-1)*(n-2)*...*(n-k+1)
    for (int i = 1; i <= k; ++i) {
        res *= (n - i + 1);
        res /= i;
    }

    return res;
}

int main() {
    int n, k;

    printf("Inserire n: ");
    scanf("%d", &n);
    printf("Inserire k: ");
    scanf("%d", &k);

    int risultato = coefficiente_binomiale(n, k);
    printf("Coefficiente binomiale di %d su %d è: %d\n", n, k, risultato);

    return 0;
}