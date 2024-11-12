#include <stdio.h>
void stampa_indirizzo(int *numero) {
    printf("L'indirizzo di x all'interno della funzione è: %p\n", numero);
    }

void main() {
    int numero;
    printf("Inserisci un numero: ");
    scanf("%d", &numero);
    printf("L'indirizzo di numero nel main è: %p\n", &numero);
    stampa_indirizzo(&numero);
}