#include <stdio.h>

int main()
{
    int a, b, c;

    printf("Saisir a : ");
    scanf("%d", &a);

    printf("Saisir b : ");
    scanf("%d", &b);

    printf("Saisir c : ");
    scanf("%d", &c);

    printf("%d + %d / %d = %d\n", a, b, c, a + b / c);
    printf("%d + %d / %d = %d", a, b, c, (a + b) / c);

    return 0;
}