#include <stdio.h>

int main() {
    // tu peux définir plusieurs variable sur la même ligne si elle sont du même type
    int a, b;

    printf("Saisir a : ");
    scanf("%d", &a);

    printf("Saisir b : ");
    scanf("%d", &b);

    printf("a + b = %d\n", a + b);
    printf("a - b = %d\n", a - b);
    printf("a * b = %d\n", a * b);
    printf("a / b = %d", a / b);

    return 0;
}

// si b = 0, on peut pas faire la division, le compilateur ne comprendra pas