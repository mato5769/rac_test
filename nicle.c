#include <stdio.h>
#include <math.h>

// Struktura za kompleksna števila
typedef struct {
    double real;
    double imag;
} Complex;

// Funkcija za branje vrednosti a, b in c
void preberi(double *a, double *b, double *c) {
    printf("Vnesite vrednosti za a, b in c: ");
    scanf("%lf %lf %lf", a, b, c);
}

// Funkcija za izračun ničel kvadratne funkcije
void izracunaj(double a, double b, double c, Complex *x1, Complex *x2, double *D) {
    *D = b * b - 4 * a * c;
    if (*D >= 0) {
        x1->real = (-b + sqrt(*D)) / (2 * a);
        x1->imag = 0;
        x2->real = (-b - sqrt(*D)) / (2 * a);
        x2->imag = 0;
    } else {
        x1->real = -b / (2 * a);
        x1->imag = sqrt(-*D) / (2 * a);
        x2->real = -b / (2 * a);
        x2->imag = -sqrt(-*D) / (2 * a);
    }
}

// Glavni program
int main() {
    double a, b, c;
    Complex x1, x2;
    double D;

    preberi(&a, &b, &c);
    izracunaj(a, b, c, &x1, &x2, &D);

    if (D >= 0) {
        printf("Realni ničli kvadratne funkcije sta: x1 = %.2lf in x2 = %.2lf\n", x1.real, x2.real);
    } else {
        printf("Kompleksni ničli kvadratne funkcije sta: x1 = %.2lf + %.2lfi in x2 = %.2lf - %.2lfi\n", x1.real, x1.imag, x2.real, x2.imag);
    }

    return 0;
}
