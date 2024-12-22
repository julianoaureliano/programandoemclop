#include <stdio.h>

int main() {
    int n, i;
    unsigned long long t1 = 0, t2 = 1, nextTerm;

    printf("Digite o valor de N: ");
    scanf("%d", &n);

    printf("Os primeiros %d números da sequência de Fibonacci são:\n", n);

    for (i = 1; i <= n; i++) {
        printf("%llu ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }

    printf("\n");
    return 0;
}