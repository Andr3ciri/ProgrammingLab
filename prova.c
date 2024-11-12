#include <stdio.h>

int potenza_2(int x) {
    return (x & (x - 1)) == 0;
}

int calcola_pi_n(int n) {
    int risultato = 0;
    for (int i = 1; i <= n; i++) {
        int somma_interna = 0;
        int prodotto_interno = 1;
        for (int y = 0; y < i; y++) {
            somma_interna += y * potenza_2(y);
            int due_alla_y_piu_uno = 1;
            for (int j = 0; j <= y; j++) {
                due_alla_y_piu_uno *= 2;
            }
            prodotto_interno *= due_alla_y_piu_uno * (1 - potenza_2(2*y));
        }
        risultato += somma_interna + prodotto_interno;
    }
    return risultato;
}

int main() {
    int n = 5;
    int risultato = calcola_pi_n(n);
    printf("Il risultato per n = %d è: %d\n", n, risultato);
    return 0;
}