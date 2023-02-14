#include <stdio.h>
#include <math.h>
void nhap(int *n, int *x)
{
    printf("Nhap so nguyen duong n: ");
    scanf("%d", n);
    printf("Nhap so nguyen duong x: ");
    scanf("%d", x);
    do
    {
        if (*n <= 0)
        {
            printf("Nhap lai so nguyen duong n: ");
            scanf("%d", n);
        }
        if (*x <= 0)
        {
            printf("Nhap lai so nguyen duong x: ");
            scanf("%d", x);
        }
    } while (n <= 0 || x <= 0);
}
long long tinhgt(int n, int x)
{
    if (n < 2)
    {
        return 0;
    }
    else if (n == 2)
    {
        return 2 * x;
    }
    else
    {
        return pow(x, n);
    }
}
int main(int argc, char const *argv[])
{
    int n, x;
    nhap(&n, &x);
    int result = tinhgt(n, x);
    printf("Ket qua la: %lld", result);
    return 0;
}
