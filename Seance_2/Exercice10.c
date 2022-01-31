#include <stdio.h>

int cmp(int a, int b) {
    if (a == b) {
        return 0;
    } else if (a < b) {
        return -1;
    } else if (a > b) {
        return 1;
    }
}

int main() {
    int a, b;

    printf("Saisir a :");
    scanf("%d", &a);

    printf("Saisir b :");
    scanf("%d", &b);

    int val = cmp(a, b);
    printf("%d", val);
    return 0;
}

