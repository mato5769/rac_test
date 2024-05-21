#include <stdio.h>
#define PI 3.14159265358979323846

// Funkcija za izračun ploščine kroga
double ploscina(double r) {
    return PI * r * r;
}

// Funkcija za izračun obsega kroga
double obseg(double r) {
    return 2 * PI * r;
}

int main() {
    double r;
    printf("Vnesite polmer kroga: ");
    scanf("%lf", &r);

    printf("Ploščina kroga: %.2lf\n", ploscina(r));
    printf("Obseg kroga: %.2lf\n", obseg(r));

    return 0;
}
