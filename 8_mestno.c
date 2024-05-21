#include <stdio.h>

// Funkcija za zapis 8-mestnega števila v polje
void zapisiVPolje(long long num, int polje[8]) {
    for (int i = 7; i >= 0; i--) {
        polje[i] = num % 10;
        num /= 10;
    }
}

int main() {
    long long stevilo;
    int polje[8];

    printf("Vnesite 8-mestno celo število: ");
    scanf("%lld", &stevilo);

    zapisiVPolje(stevilo, polje);

    printf("Števke v polju: ");
    for (int i = 0; i < 8; i++) {
        printf("%d ", polje[i]);
    }
    printf("\n");

    return 0;
}
