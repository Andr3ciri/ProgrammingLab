#include <stdio.h>

int is_prime(int n) {
    if (n <= 1) return 0;

    for (int i = 2; i <= n / 2; i++) {
        if (n % i == 0) {
            return 0;
        }
    }

    return 1;
}

int main() {
    int count_primes = 0;
    int prev_prime = 0;
    int sum_distances = 0;

    for (int i = 1; i <= 100; i++) {
        if (is_prime(i)) {
            count_primes++;
            if (prev_prime > 0) {
                sum_distances += i - prev_prime;
            }
            prev_prime = i;
        }
    }

    // Calcoliamo la distanza media solo alla fine
    if (count_primes > 1) {
        double avg_distance = (double)sum_distances / (count_primes - 1);
        printf("Numero di primi trovati: %d\n", count_primes);
        printf("Distanza media tra i primi: %.2f\n", avg_distance);
    } else {
        printf("Sono stati trovati meno di 2 numeri primi.\n");
    }

    return 0;
}

