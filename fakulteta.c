#include <stdio.h>

// Funkcija za izračun fakultete
unsigned long long fakulteta(int n) {
    if (n == 0 || n == 1) {
        return 1;
    }
    return n * fakulteta(n - 1);
}

// Glavni program
int main() {
    int n;
    
    do {
        printf("Vnesite število n (med 1 in 100): ");
        scanf("%d", &n);
    } while (n < 1 || n > 100);
    
    printf("%d! = %llu\n", n, fakulteta(n));
    
    return 0;
}
