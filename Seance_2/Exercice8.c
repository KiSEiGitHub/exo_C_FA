#include <stdio.h>

int sum(int n) {
    return n * (n + 1) / 2;
}

int main() {
    int n;

    printf("Saisir n :");
    scanf("%d", &n);

    int res = sum(n);

    printf("resultat de %d * (%d + 1) / 2 = %d", n, n, res);
}

