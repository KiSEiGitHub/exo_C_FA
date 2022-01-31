#include <stdio.h>

int Fibo(int n){
    if(n == 0 || n == 1){
        return n;
    } else {
        return (Fibo(n-1) + Fibo(n - 2));
    }
}

int main() {
    int n, i = 0;

    printf("Saisir n :");
    scanf("%d", &n);

    for (int j = 1; j <= n; j++){
        printf("%d\n", Fibo(i));
        i++;
    }
    return 0;
}