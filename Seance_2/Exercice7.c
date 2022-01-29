#include <stdio.h>

int min(int a, int b){
    if(a < b){
        return a;
    } else {
        return b;
    }
}

int main() {
    int a, b;

    printf("Saisir a :");
    scanf("%d", &a);

    printf("Saisir b :");
    scanf("%d", &b);

    int petit = min(a, b);

    printf("Le plus petit nombre entre %d et %d est %d", a, b, petit);

    return 0;
}