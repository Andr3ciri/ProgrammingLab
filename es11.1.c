#include <stdio.h>

double calcolaTermine(int n) {
    if (n == 1) {
        return 1.0 / 2.0; // Caso base: primo termine è 1/2
    } else {
        return (calcolaTermine(n - 1) + 1) / 2.0; // Caso ricorsivo
    }
}

int main() {
    int n;
    printf("Inserisci il valore di n: ");
    scanf("%d", &n);

    double risultato = calcolaTermine(n);
    printf("Il termine %d-esimo della successione è: %lf\n", n, risultato);

    return 0;
}