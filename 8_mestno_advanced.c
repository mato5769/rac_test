#include <stdio.h>

typedef struct {
    int polje[8];
    int max;
    int min;
    double povprecje;
} Podatki;

// Funkcija za izračun maksimalne, minimalne in povprečne vrednosti
void izracunajPodatke(Podatki *p) {
    p->max = p->polje[0];
    p->min = p->polje[0];
    int vsota = 0;
    for (int i = 0; i < 8; i++) {
        if (p->polje[i] > p->max) p->max = p->polje[i];
        if (p->polje[i] < p->min) p->min = p->polje[i];
        vsota += p->polje[i];
    }
    p->povprecje = vsota / 8.0;
}

// Funkcija za urejanje polja od največjega do najmanjšega
void urediPolje(int polje[8]) {
    for (int i = 0; i < 7; i++) {
        for (int j = i + 1; j < 8; j++) {
            if (polje[i] < polje[j]) {
                int temp = polje[i];
                polje[i] = polje[j];
                polje[j] = temp;
            }
        }
    }
}

int main() {
    Podatki p = {{8, 5, 6, 8, 6, 5, 8, 6}, 0, 0, 0.0};

    izracunajPodatke(&p);

    printf("Maksimalna vrednost: %d\n", p.max);
    printf("Minimalna vrednost: %d\n", p.min);
    printf("Povprečna vrednost: %.2lf\n", p.povprecje);

    urediPolje(p.polje);

    printf("Urejeno polje: ");
    for (int i = 0; i < 8; i++) {
        printf("%d ", p.polje[i]);
    }
    printf("\n");

    return 0;
}
