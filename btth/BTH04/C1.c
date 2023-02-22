#include <stdio.h>
void nhap(int *n)
{
    printf("Nhap so n: ");
    scanf("%d", n);
    do
    {
        if (*n <= 0)
        {
            printf("Nhap lai so n: ");
            scanf("%d", n);
        }

    } while (*n <= 0);
}
int fibonacci(int n)
{
    if (n == 1 || n == 2)
        return 1;
    return fibonacci(n - 1) + fibonacci(n - 2);
}
int main(int argc, char const *argv[])
{
    int n;
    nhap(&n);
    int sofibonaccin = fibonacci(n);
    printf("%d", sofibonaccin);
    return 0;
}
