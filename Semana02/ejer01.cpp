#include <stdio.h>

int main()
{
    int n1, n2;
    int resp = 0;

    printf("ing. un numero 1:");
    scanf("%d", &n1);
    printf("ing. un numero 2:");
    scanf("%d", &n2);

    resp = n1 + n2;

    printf("La suma de %d y %d es: %d\n", n1, n2, resp);
    return 0;
}