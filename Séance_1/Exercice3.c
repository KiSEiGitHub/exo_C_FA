#include <stdio.h>

int main() {
    char nom[256];
    char prenom[256];
    int age;

    printf("Quel age avez-vous ? : ");
    scanf("%d", &age);

    printf("Prenom : ");
    scanf("%s", &prenom);

    printf("nom : ");
    scanf("%s", &nom);

    printf("Bojour %s %s vous avez %d ans", prenom, nom, age);

    return 0;
}