#include <stdio.h>

int main() {
    float t, p;

    printf("Saisir t :");
    scanf("%f", &t);

    printf("Saisir p :");
    scanf("%f", &p);

    printf("Nombre d'etudiant : %.2f", (t * p) / 100);
}

// je sais pas si le calcule est bon