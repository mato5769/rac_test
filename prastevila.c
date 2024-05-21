#include <stdio.h>
#include <math.h>
#include <stdbool.h>

// Funkcija za preverjanje praštevil
bool jePrastevilo(int n) {
    if (n <= 1) return false;
    if (n == 2) return true;
    if (n % 2 == 0) return false;
    for (int i = 3; i <= sqrt(n); i += 2) {
        if (n % i == 0) return false;
    }
    return true;
}

int main() {
    int a;
    printf("Vnesite vrednost a: ");
    scanf("%d", &a);

    printf("Praštevila na intervalu [%d, %d] so:\n", -a, a);
    for (int i = -a; i <= a; i++) {
        if (jePrastevilo(i)) {
            printf("%d ", i);
        }
    }
    printf("\n");

    return 0;
}
